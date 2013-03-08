#!/bin/bash -e
#!/bin/bash -vxe

filesToProcess() {
  local listFile=files
  cat $listFile
  #awk -F: '$1 ~ /.c$/ {print gensub(/\.c$/, "", "", $1)}' < linux_2.6.33.3_pcs.txt
}


flags=""
srcPath="vim/src"
export partialPreprocFlags="--bdd \
    -I $srcPath \
    -I $srcPath/proto \
    -I extraheader \
    -I /usr/include/glib-2.0/
    -I /usr/include/cairo
    --prefixonly FEAT_
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

