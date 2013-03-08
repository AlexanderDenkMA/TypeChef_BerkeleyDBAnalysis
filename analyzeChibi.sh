#!/bin/bash -e
#!/bin/bash -vxe

filesToProcess() {
  local listFile=chibi_files
  cat $listFile
  #awk -F: '$1 ~ /.c$/ {print gensub(/\.c$/, "", "", $1)}' < linux_2.6.33.3_pcs.txt
}


flags=""
srcPath="ChibiOS"
export partialPreprocFlags="--openFeat chibi_features -I $srcPath/os/kernel/include -I $srcPath/os/ports/GCC/ -I $srcPath/test -I $srcPath/os/hal/include -I $srcPath/os/hal/platforms/Posix -I $srcPath/boards/simulator -I $srcPath/os/various -I $srcPath/demos/Posix-GCC -I $srcPath/os/ports/GCC/SIMIA32 --debugInterface --writePI --recordTiming --parserstatistics --lexdebug --include header.h --featureModelFExpr fm.approx -t"

## Reset output
filesToProcess|while read i; do
  if [ ! -f $srcPath/$i.dbg ]; then
    touch $srcPath/$i.dbg
    ./jcpp.sh $srcPath/$i.c $flags
  else
    echo "Skipping $srcPath/$i.c"
  fi
done

