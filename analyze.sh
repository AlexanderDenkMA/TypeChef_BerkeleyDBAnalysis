#!/bin/bash -e
#!/bin/bash -vxe

filesToProcess() {
  local listFile=files
  cat $listFile
  #awk -F: '$1 ~ /.c$/ {print gensub(/\.c$/, "", "", $1)}' < linux_2.6.33.3_pcs.txt
}


flags=""
srcPath="bdb"
export partialPreprocFlags="--bdd \
    -I $srcPath/src \
    -I $srcPath/build_unix \
    --openFeat features \
    --debugInterface --writePI --recordTiming --parserstatistics --lexdebug \
    --include header.h \
    --featureModelFExpr fm.approx \
    -t"

## Reset output
filesToProcess|while read i; do
  if [ ! -f $srcPath/$i.dbg ]; then
    touch $srcPath/$i.dbg
    ./jcpp.sh $srcPath/$i.c $flags
  else
    echo "Skipping $srcPath/$i.c"
  fi
done

