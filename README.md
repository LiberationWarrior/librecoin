Librecoin information
=====================

What is Librecoin?
------------------

Librecoin is the first scientific cryptocurrency that is released under the GNU
General Public License. Librecoin uses Primecoin's proof-of-work, which
provides potential scientific value in addition to minting and security for the
network. Similar to Bitcoin and Primecoin, Librecoin enables instant payments
to anyone, anywhere in the world. It also uses peer-to-peer technology to
operate with no central authority: managing transactions and issuing money are
carried out collectively by the network. Librecoin is also the name of the open
source software which enables the use of this currency.

License
-------

Librecoin is released under the GPLv3 (version 3 of the GNU General Public
License). See COPYING and https://www.gnu.org/licenses/gpl-3.0.html for more
information.

Installation
------------

Clone this repository:

    sudo apt-get install git
    git clone https://github.com/LiberationWarrior/librecoin.git

Create a config file:

    mkdir -p .librecoin
    echo 'server=1
    rpcuser=librecoinrpc
    rpcpassword=RANDOM_PASSWORD
    rpcallowip=127.0.0.1
    gen=1
    sievesize=1000000
    sievepercentage=10
    sieveextensions=9' > .librecoin/librecoin.conf
    sed -i -e "s/RANDOM_PASSWORD/`< /dev/urandom tr -cd '[:alnum:]' | head -c32`/" .librecoin/librecoin.conf

Install necessary dependencies:

    cd librecoin
    sudo apt-get install build-essential m4 libssl-dev libdb++-dev libboost-all-dev libminiupnpc-dev libgmp3-dev

Create librecoind with command-line interface:

    cd src
    make -f makefile.unix
    strip librecoind
    mv librecoind ..
    cd ..

Run librecoind in librecoin directory:

    ./librecoind --daemon
    ./librecoind help

Create librecoin-qt with graphical user interface:

    sudo apt-get install qt4-qmake libqt4-dev
    qmake-qt4 USE_UPNP=1 USE_DBUS=1 USE_QRCODE=1 -o Makefile librecoin-qt.pro
    make

Run librecoin-qt in librecoin directory:

    ./librecoin-qt
