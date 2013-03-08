#!/bin/bash -e
#!/bin/bash -vxe

filesToProcess() {
  local listFile=mpsolve_files
  cat $listFile
  #awk -F: '$1 ~ /.c$/ {print gensub(/\.c$/, "", "", $1)}' < linux_2.6.33.3_pcs.txt
}


flags=""
srcPath="MPSolve-2.2"
export partialPreprocFlags="--openFeat mpsolve_features -I $srcPath/ -I $srcPath/Gmp --debugInterface --writePI --recordTiming --parserstatistics --lexdebug --include header.h --featureModelFExpr fm.approx -t"

## Reset output
filesToProcess|while read i; do
  if [ ! -f $srcPath/$i.dbg ]; then
    touch $srcPath/$i.dbg
    ./jcpp.sh $srcPath/$i.c $flags
  else
    echo "Skipping $srcPath/$i.c"
  fi
done

