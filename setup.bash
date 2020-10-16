#!/usr/bin/bash
# -*- coding: utf-8 -*-
mkdir -p tri-echo/build
cd tri-echo/build; cmake ..; make; sudo cp tri_echo /usr/local/bin
echo 'alias tri-echo=". /usr/local/bin/tri_echo"' >> $HOME/.bashrc
