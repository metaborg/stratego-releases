#! /bin/bash

echo ""
echo "Lines of code: `cat $* | wc -l`"
echo ""
echo "Rules and strategies"
echo ""
stratego-metrics $*
echo ""

