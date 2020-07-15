#!/usr/bin/bash
# -*- coding: utf-8 -*-
mkdir tri-echo/build
cd tri-echo/build; cmake ..; make; sudo cp triangular_echo /usr/local/bin
echo 'alias tri-echo=". /usr/local/bin/triangular_echo"' >> $HOME/.bashrc
