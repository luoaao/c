#! /bin/bash

mkdir ~/mydir
cp /etc/passwd ~/mydir
cp -a /etc/groff ~/mydir
tar -cvzf ~/mydir.tar.gz ~/mydir
