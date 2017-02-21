#!/bin/bash
SRC_HOME=/home/kyunghoj/src/pubsubtest
IDL_DIR=$SRC_HOME/pubsubtest_idl

LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$SRC_HOME/pubsubtest_idl

CLASSPATH=classes:/home/kyunghoj/src/OpenDDS-3.10/lib/i2jrt.jar
CLASSPATH=$CLASSPATH:/home/kyunghoj/src/OpenDDS-3.10/lib/OpenDDS_DCPS.jar:classes
CLASSPATH=$CLASSPATH:/home/kyunghoj/src/pubsubtest/pubsubtest_idl/classes
CLASSPATH=$CLASSPATH:/home/kyunghoj/src/pubsubtest/pubsubtest_idl/DDS_PubSubTest_types.jar
echo $CLASSPATH

/usr/lib/jvm/java-8-oracle/bin/java -ea -cp $CLASSPATH \
    FruitSubscriber -DCPSConfigFile sub_tcp.ini


