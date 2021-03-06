# This file was automagically generated by mbed.org. For more information, 
# see http://mbed.org/handbook/Exporting-to-GCC-ARM-Embedded

###############################################################################
# Boiler-plate

# cross-platform directory manipulation
ifeq ($(shell echo $$OS),$$OS)
    MAKEDIR = if not exist "$(1)" mkdir "$(1)"
    RM = rmdir /S /Q "$(1)"
else
    MAKEDIR = '$(SHELL)' -c "mkdir -p \"$(1)\""
    RM = '$(SHELL)' -c "rm -rf \"$(1)\""
endif

OBJDIR := BUILD
# Move to the build directory
ifeq (,$(filter $(OBJDIR),$(notdir $(CURDIR))))
.SUFFIXES:
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
MAKETARGET = '$(MAKE)' --no-print-directory -C $(OBJDIR) -f '$(mkfile_path)' \
		'SRCDIR=$(CURDIR)' $(MAKECMDGOALS)
.PHONY: $(OBJDIR) clean
all:
	+@$(call MAKEDIR,$(OBJDIR))
	+@$(MAKETARGET)
$(OBJDIR): all
Makefile : ;
% :: $(OBJDIR) ; :
clean :
	$(call RM,$(OBJDIR))

else

# trick rules into thinking we are in the root, when we are in the bulid dir
VPATH = ..

# Boiler-plate
###############################################################################
# Project settings

PROJECT := Oministe_FRDM_PCB_sensor_bus


# Project settings
###############################################################################
# Objects and Paths

OBJECTS += DHT/DHT.o
OBJECTS += ESP8266/ESP8266.o
OBJECTS += GT511C3/GT511C3.o
OBJECTS += main.o
OBJECTS += mbed-os/features/frameworks/greentea-client/source/test_env.o
OBJECTS += mbed-os/features/frameworks/unity/source/unity.o
OBJECTS += mbed-os/features/frameworks/utest/mbed-utest-shim.o
OBJECTS += mbed-os/features/frameworks/utest/source/unity_handler.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_case.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_default_handlers.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_greentea_handlers.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_harness.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_serial.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_shim.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_stack_trace.o
OBJECTS += mbed-os/features/frameworks/utest/source/utest_types.o
OBJECTS += mbed-os/features/mbedtls/src/aes.o
OBJECTS += mbed-os/features/mbedtls/src/aesni.o
OBJECTS += mbed-os/features/mbedtls/src/arc4.o
OBJECTS += mbed-os/features/mbedtls/src/asn1parse.o
OBJECTS += mbed-os/features/mbedtls/src/asn1write.o
OBJECTS += mbed-os/features/mbedtls/src/base64.o
OBJECTS += mbed-os/features/mbedtls/src/bignum.o
OBJECTS += mbed-os/features/mbedtls/src/blowfish.o
OBJECTS += mbed-os/features/mbedtls/src/camellia.o
OBJECTS += mbed-os/features/mbedtls/src/ccm.o
OBJECTS += mbed-os/features/mbedtls/src/certs.o
OBJECTS += mbed-os/features/mbedtls/src/cipher.o
OBJECTS += mbed-os/features/mbedtls/src/cipher_wrap.o
OBJECTS += mbed-os/features/mbedtls/src/ctr_drbg.o
OBJECTS += mbed-os/features/mbedtls/src/debug.o
OBJECTS += mbed-os/features/mbedtls/src/des.o
OBJECTS += mbed-os/features/mbedtls/src/dhm.o
OBJECTS += mbed-os/features/mbedtls/src/ecdh.o
OBJECTS += mbed-os/features/mbedtls/src/ecdsa.o
OBJECTS += mbed-os/features/mbedtls/src/ecjpake.o
OBJECTS += mbed-os/features/mbedtls/src/ecp.o
OBJECTS += mbed-os/features/mbedtls/src/ecp_curves.o
OBJECTS += mbed-os/features/mbedtls/src/entropy.o
OBJECTS += mbed-os/features/mbedtls/src/entropy_poll.o
OBJECTS += mbed-os/features/mbedtls/src/error.o
OBJECTS += mbed-os/features/mbedtls/src/gcm.o
OBJECTS += mbed-os/features/mbedtls/src/havege.o
OBJECTS += mbed-os/features/mbedtls/src/hmac_drbg.o
OBJECTS += mbed-os/features/mbedtls/src/md.o
OBJECTS += mbed-os/features/mbedtls/src/md2.o
OBJECTS += mbed-os/features/mbedtls/src/md4.o
OBJECTS += mbed-os/features/mbedtls/src/md5.o
OBJECTS += mbed-os/features/mbedtls/src/md_wrap.o
OBJECTS += mbed-os/features/mbedtls/src/memory_buffer_alloc.o
OBJECTS += mbed-os/features/mbedtls/src/net.o
OBJECTS += mbed-os/features/mbedtls/src/oid.o
OBJECTS += mbed-os/features/mbedtls/src/padlock.o
OBJECTS += mbed-os/features/mbedtls/src/pem.o
OBJECTS += mbed-os/features/mbedtls/src/pk.o
OBJECTS += mbed-os/features/mbedtls/src/pk_wrap.o
OBJECTS += mbed-os/features/mbedtls/src/pkcs11.o
OBJECTS += mbed-os/features/mbedtls/src/pkcs12.o
OBJECTS += mbed-os/features/mbedtls/src/pkcs5.o
OBJECTS += mbed-os/features/mbedtls/src/pkparse.o
OBJECTS += mbed-os/features/mbedtls/src/pkwrite.o
OBJECTS += mbed-os/features/mbedtls/src/platform.o
OBJECTS += mbed-os/features/mbedtls/src/ripemd160.o
OBJECTS += mbed-os/features/mbedtls/src/rsa.o
OBJECTS += mbed-os/features/mbedtls/src/sha1.o
OBJECTS += mbed-os/features/mbedtls/src/sha256.o
OBJECTS += mbed-os/features/mbedtls/src/sha512.o
OBJECTS += mbed-os/features/mbedtls/src/ssl_cache.o
OBJECTS += mbed-os/features/mbedtls/src/ssl_ciphersuites.o
OBJECTS += mbed-os/features/mbedtls/src/ssl_cli.o
OBJECTS += mbed-os/features/mbedtls/src/ssl_cookie.o
OBJECTS += mbed-os/features/mbedtls/src/ssl_srv.o
OBJECTS += mbed-os/features/mbedtls/src/ssl_ticket.o
OBJECTS += mbed-os/features/mbedtls/src/ssl_tls.o
OBJECTS += mbed-os/features/mbedtls/src/threading.o
OBJECTS += mbed-os/features/mbedtls/src/timing.o
OBJECTS += mbed-os/features/mbedtls/src/version.o
OBJECTS += mbed-os/features/mbedtls/src/version_features.o
OBJECTS += mbed-os/features/mbedtls/src/x509.o
OBJECTS += mbed-os/features/mbedtls/src/x509_create.o
OBJECTS += mbed-os/features/mbedtls/src/x509_crl.o
OBJECTS += mbed-os/features/mbedtls/src/x509_crt.o
OBJECTS += mbed-os/features/mbedtls/src/x509_csr.o
OBJECTS += mbed-os/features/mbedtls/src/x509write_crt.o
OBJECTS += mbed-os/features/mbedtls/src/x509write_csr.o
OBJECTS += mbed-os/features/mbedtls/src/xtea.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/EthernetInterface.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth/arch/TARGET_Freescale/hardware_init_MK64F12.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth/arch/TARGET_Freescale/k64f_emac.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-sys/arch/lwip_checksum.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-sys/arch/lwip_memcpy.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-sys/arch/lwip_sys_arch.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_api_lib.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_api_msg.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_err.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_netbuf.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_netdb.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_netifapi.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_sockets.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api/lwip_tcpip.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_autoip.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_icmp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_igmp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_inet.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_inet_chksum.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_ip.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_ip_addr.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4/lwip_ip_frag.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_def.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_dhcp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_dns.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_init.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_mem.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_memp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_netif.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_pbuf.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_raw.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_stats.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_tcp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_tcp_in.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_tcp_out.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_timers.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/lwip_udp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp/lwip_asn1_dec.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp/lwip_asn1_enc.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp/lwip_mib2.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp/lwip_mib_structs.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp/lwip_msg_in.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp/lwip_msg_out.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/lwip_etharp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/lwip_ethernetif.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/lwip_slipif.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_auth.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_chap.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_chpms.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_fsm.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_ipcp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_lcp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_magic.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_md5.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_pap.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_ppp.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_ppp_oe.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_randm.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp/lwip_vj.o
OBJECTS += mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip_stack.o
OBJECTS += mbed-os/features/net/network-socket/DnsQuery/DnsQuery.o
OBJECTS += mbed-os/features/net/network-socket/NetworkStack.o
OBJECTS += mbed-os/features/net/network-socket/Socket.o
OBJECTS += mbed-os/features/net/network-socket/SocketAddress.o
OBJECTS += mbed-os/features/net/network-socket/TCPServer.o
OBJECTS += mbed-os/features/net/network-socket/TCPSocket.o
OBJECTS += mbed-os/features/net/network-socket/UDPSocket.o
OBJECTS += mbed-os/features/storage/FEATURE_STORAGE/cfstore/source/cfstore_fnmatch.o
OBJECTS += mbed-os/features/storage/FEATURE_STORAGE/cfstore/source/cfstore_test.o
OBJECTS += mbed-os/features/storage/FEATURE_STORAGE/cfstore/source/configuration_store.o
OBJECTS += mbed-os/features/storage/FEATURE_STORAGE/flash-journal/flash-journal-strategy-sequential/strategy.o
OBJECTS += mbed-os/features/storage/FEATURE_STORAGE/flash-journal/flash-journal-strategy-sequential/support_funcs.o
OBJECTS += mbed-os/hal/common/AnalogIn.o
OBJECTS += mbed-os/hal/common/BusIn.o
OBJECTS += mbed-os/hal/common/BusInOut.o
OBJECTS += mbed-os/hal/common/BusOut.o
OBJECTS += mbed-os/hal/common/CAN.o
OBJECTS += mbed-os/hal/common/CallChain.o
OBJECTS += mbed-os/hal/common/Ethernet.o
OBJECTS += mbed-os/hal/common/FileBase.o
OBJECTS += mbed-os/hal/common/FileLike.o
OBJECTS += mbed-os/hal/common/FilePath.o
OBJECTS += mbed-os/hal/common/FileSystemLike.o
OBJECTS += mbed-os/hal/common/I2C.o
OBJECTS += mbed-os/hal/common/I2CSlave.o
OBJECTS += mbed-os/hal/common/InterruptIn.o
OBJECTS += mbed-os/hal/common/InterruptManager.o
OBJECTS += mbed-os/hal/common/LocalFileSystem.o
OBJECTS += mbed-os/hal/common/RawSerial.o
OBJECTS += mbed-os/hal/common/SPI.o
OBJECTS += mbed-os/hal/common/SPISlave.o
OBJECTS += mbed-os/hal/common/Serial.o
OBJECTS += mbed-os/hal/common/SerialBase.o
OBJECTS += mbed-os/hal/common/Stream.o
OBJECTS += mbed-os/hal/common/Ticker.o
OBJECTS += mbed-os/hal/common/Timeout.o
OBJECTS += mbed-os/hal/common/Timer.o
OBJECTS += mbed-os/hal/common/TimerEvent.o
OBJECTS += mbed-os/hal/common/mbed_assert.o
OBJECTS += mbed-os/hal/common/mbed_board.o
OBJECTS += mbed-os/hal/common/mbed_critical.o
OBJECTS += mbed-os/hal/common/mbed_error.o
OBJECTS += mbed-os/hal/common/mbed_gpio.o
OBJECTS += mbed-os/hal/common/mbed_interface.o
OBJECTS += mbed-os/hal/common/mbed_lp_ticker_api.o
OBJECTS += mbed-os/hal/common/mbed_pinmap_common.o
OBJECTS += mbed-os/hal/common/mbed_rtc_time.o
OBJECTS += mbed-os/hal/common/mbed_semihost_api.o
OBJECTS += mbed-os/hal/common/mbed_ticker_api.o
OBJECTS += mbed-os/hal/common/mbed_us_ticker_api.o
OBJECTS += mbed-os/hal/common/mbed_wait_api.o
OBJECTS += mbed-os/hal/common/retarget.o
OBJECTS += mbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F/TOOLCHAIN_GCC_ARM/startup_MK64F12.o
OBJECTS += mbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F/cmsis_nvic.o
OBJECTS += mbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F/system_MK64F12.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/TARGET_FRDM/PeripheralPins.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/TARGET_FRDM/crc.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/TARGET_FRDM/fsl_clock_config.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/TARGET_FRDM/fsl_phy.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/TARGET_FRDM/mbed_overrides.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_adc16.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_clock.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_cmp.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_cmt.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_common.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_crc.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_dac.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_dmamux.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_dspi.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_dspi_edma.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_edma.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_enet.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_ewm.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_flash.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_flexbus.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_flexcan.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_ftm.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_gpio.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_i2c.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_i2c_edma.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_llwu.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_lptmr.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_mpu.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_pdb.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_pit.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_pmc.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_rcm.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_rnga.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_rtc.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_sai.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_sai_edma.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_sdhc.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_sim.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_smc.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_uart.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_uart_edma.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_vref.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers/fsl_wdog.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/entropy_hardware_poll.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/pwmout_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/serial_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/spi_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/storage_driver.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/us_ticker.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/analogin_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/analogout_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/gpio_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/gpio_irq_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/i2c_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/pinmap.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/port_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/rtc_api.o
OBJECTS += mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api/sleep.o
OBJECTS += mbed-os/rtos/rtos/Mutex.o
OBJECTS += mbed-os/rtos/rtos/RtosTimer.o
OBJECTS += mbed-os/rtos/rtos/Semaphore.o
OBJECTS += mbed-os/rtos/rtos/Thread.o
OBJECTS += mbed-os/rtos/rtos/rtos_idle.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/HAL_CM.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/RTX_Conf_CM.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_RTOS_M4_M7/TOOLCHAIN_GCC/HAL_CM4.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_RTOS_M4_M7/TOOLCHAIN_GCC/SVC_Table.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_CMSIS.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Event.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_List.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Mailbox.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_MemBox.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Memory.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Mutex.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_OsEventObserver.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Robin.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Semaphore.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_System.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Task.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Time.o
OBJECTS += mbed-os/rtos/rtx/TARGET_CORTEX_M/rt_Timer.o


INCLUDE_PATHS += -I../
INCLUDE_PATHS += -I../.
INCLUDE_PATHS += -I../DHT
INCLUDE_PATHS += -I../ESP8266
INCLUDE_PATHS += -I../GT511C3
INCLUDE_PATHS += -I../mbed-os/.
INCLUDE_PATHS += -I../mbed-os/docs
INCLUDE_PATHS += -I../mbed-os/features
INCLUDE_PATHS += -I../mbed-os/features/frameworks
INCLUDE_PATHS += -I../mbed-os/features/frameworks/greentea-client
INCLUDE_PATHS += -I../mbed-os/features/frameworks/greentea-client/greentea-client
INCLUDE_PATHS += -I../mbed-os/features/frameworks/greentea-client/source
INCLUDE_PATHS += -I../mbed-os/features/frameworks/unity
INCLUDE_PATHS += -I../mbed-os/features/frameworks/unity/source
INCLUDE_PATHS += -I../mbed-os/features/frameworks/unity/unity
INCLUDE_PATHS += -I../mbed-os/features/frameworks/utest
INCLUDE_PATHS += -I../mbed-os/features/frameworks/utest/source
INCLUDE_PATHS += -I../mbed-os/features/frameworks/utest/utest
INCLUDE_PATHS += -I../mbed-os/features/mbedtls
INCLUDE_PATHS += -I../mbed-os/features/mbedtls/importer
INCLUDE_PATHS += -I../mbed-os/features/mbedtls/inc
INCLUDE_PATHS += -I../mbed-os/features/mbedtls/inc/mbedtls
INCLUDE_PATHS += -I../mbed-os/features/mbedtls/src
INCLUDE_PATHS += -I../mbed-os/features/net
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth/arch
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth/arch/TARGET_Freescale
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-sys
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-sys/arch
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/ipv4
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/ipv4/lwip
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/lwip
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/netif
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif
INCLUDE_PATHS += -I../mbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp
INCLUDE_PATHS += -I../mbed-os/features/net/network-socket
INCLUDE_PATHS += -I../mbed-os/features/net/network-socket/DnsQuery
INCLUDE_PATHS += -I../mbed-os/features/storage
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore/configuration-store
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore/doc
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/design
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/design/pics
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/design/umlet
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/project
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/cfstore/source
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/flash-journal
INCLUDE_PATHS += -I../mbed-os/features/storage/FEATURE_STORAGE/flash-journal/flash-journal-strategy-sequential
INCLUDE_PATHS += -I../mbed-os/hal
INCLUDE_PATHS += -I../mbed-os/hal/api
INCLUDE_PATHS += -I../mbed-os/hal/common
INCLUDE_PATHS += -I../mbed-os/hal/hal
INCLUDE_PATHS += -I../mbed-os/hal/hal/storage_abstraction
INCLUDE_PATHS += -I../mbed-os/hal/targets
INCLUDE_PATHS += -I../mbed-os/hal/targets/cmsis
INCLUDE_PATHS += -I../mbed-os/hal/targets/cmsis/TARGET_Freescale
INCLUDE_PATHS += -I../mbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F
INCLUDE_PATHS += -I../mbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F/TOOLCHAIN_GCC_ARM
INCLUDE_PATHS += -I../mbed-os/hal/targets/cmsis/TOOLCHAIN_GCC
INCLUDE_PATHS += -I../mbed-os/hal/targets/hal
INCLUDE_PATHS += -I../mbed-os/hal/targets/hal/TARGET_Freescale
INCLUDE_PATHS += -I../mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS
INCLUDE_PATHS += -I../mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F
INCLUDE_PATHS += -I../mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/TARGET_FRDM
INCLUDE_PATHS += -I../mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers
INCLUDE_PATHS += -I../mbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api
INCLUDE_PATHS += -I../mbed-os/rtos
INCLUDE_PATHS += -I../mbed-os/rtos/rtos
INCLUDE_PATHS += -I../mbed-os/rtos/rtx
INCLUDE_PATHS += -I../mbed-os/rtos/rtx/TARGET_CORTEX_M
INCLUDE_PATHS += -I../mbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_RTOS_M4_M7
INCLUDE_PATHS += -I../mbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_RTOS_M4_M7/TOOLCHAIN_GCC

LIBRARY_PATHS :=
LIBRARIES :=
LINKER_SCRIPT ?= ../mbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F/TOOLCHAIN_GCC_ARM/MK64FN1M0xxx12.ld

# Objects and Paths
###############################################################################
# Tools and Flags

AS      = 'arm-none-eabi-gcc' '-x' 'assembler-with-cpp' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
CC      = 'arm-none-eabi-gcc' '-std=gnu99' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
CPP     = 'arm-none-eabi-g++' '-std=gnu++98' '-fno-rtti' '-Wvla' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
LD      = 'arm-none-eabi-gcc'
ELF2BIN = 'arm-none-eabi-objcopy'
PREPROC = 'arm-none-eabi-cpp' '-E' '-P' '-Wl,--gc-sections' '-Wl,--wrap,main' '-Wl,--wrap,_malloc_r' '-Wl,--wrap,_free_r' '-Wl,--wrap,_realloc_r' '-Wl,--wrap,_memalign_r' '-Wl,--wrap,_calloc_r' '-Wl,--wrap,exit' '-Wl,--wrap,atexit' '-Wl,-n' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'


C_FLAGS += -std=gnu99
C_FLAGS += -D__MBED__=1
C_FLAGS += -DDEVICE_I2CSLAVE=1
C_FLAGS += -D__FPU_PRESENT=1
C_FLAGS += -DTARGET_Freescale
C_FLAGS += -DDEVICE_PORTINOUT=1
C_FLAGS += -DTARGET_RTOS_M4_M7
C_FLAGS += -DDEVICE_RTC=1
C_FLAGS += -DTOOLCHAIN_object
C_FLAGS += -D__CMSIS_RTOS
C_FLAGS += -DFSL_RTOS_MBED
C_FLAGS += -DDEVICE_STORAGE=1
C_FLAGS += -DMBEDTLS_ENTROPY_HARDWARE_ALT
C_FLAGS += -DTARGET_KPSDK_MCUS
C_FLAGS += -DTOOLCHAIN_GCC
C_FLAGS += -DTARGET_CORTEX_M
C_FLAGS += -DTARGET_KSDK2_MCUS
C_FLAGS += -DTARGET_LIKE_CORTEX_M4
C_FLAGS += -DDEVICE_ANALOGOUT=1
C_FLAGS += -DTARGET_M4
C_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
C_FLAGS += -DMBED_BUILD_TIMESTAMP=1519435319.41
C_FLAGS += -DTARGET_K64F
C_FLAGS += -DDEVICE_SERIAL=1
C_FLAGS += -DDEVICE_INTERRUPTIN=1
C_FLAGS += -DTARGET_CORTEX
C_FLAGS += -DDEVICE_I2C=1
C_FLAGS += -DDEVICE_PORTOUT=1
C_FLAGS += -D__CORTEX_M4
C_FLAGS += -DDEVICE_STDIO_MESSAGES=1
C_FLAGS += -DCPU_MK64FN1M0VMD12
C_FLAGS += -DFEATURE_IPV4=1
C_FLAGS += -DTARGET_LIKE_MBED
C_FLAGS += -DTARGET_FF_ARDUINO
C_FLAGS += -DTARGET_KPSDK_CODE
C_FLAGS += -DTARGET_RELEASE
C_FLAGS += -DDEVICE_SERIAL_FC=1
C_FLAGS += -DFEATURE_STORAGE=1
C_FLAGS += -D__MBED_CMSIS_RTOS_CM
C_FLAGS += -DDEVICE_SLEEP=1
C_FLAGS += -DTOOLCHAIN_GCC_ARM
C_FLAGS += -DTARGET_FRDM
C_FLAGS += -DDEVICE_SPI=1
C_FLAGS += -DDEVICE_ERROR_RED=1
C_FLAGS += -DDEVICE_SPISLAVE=1
C_FLAGS += -DDEVICE_ANALOGIN=1
C_FLAGS += -DDEVICE_PWMOUT=1
C_FLAGS += -DDEVICE_PORTIN=1
C_FLAGS += -DTARGET_MCU_K64F
C_FLAGS += -DARM_MATH_CM4
C_FLAGS += -include
C_FLAGS += mbed_config.h

CXX_FLAGS += -std=gnu++98
CXX_FLAGS += -fno-rtti
CXX_FLAGS += -Wvla
CXX_FLAGS += -D__MBED__=1
CXX_FLAGS += -DDEVICE_I2CSLAVE=1
CXX_FLAGS += -D__FPU_PRESENT=1
CXX_FLAGS += -DTARGET_Freescale
CXX_FLAGS += -DDEVICE_PORTINOUT=1
CXX_FLAGS += -DTARGET_RTOS_M4_M7
CXX_FLAGS += -DDEVICE_RTC=1
CXX_FLAGS += -DTOOLCHAIN_object
CXX_FLAGS += -D__CMSIS_RTOS
CXX_FLAGS += -DFSL_RTOS_MBED
CXX_FLAGS += -DDEVICE_STORAGE=1
CXX_FLAGS += -DMBEDTLS_ENTROPY_HARDWARE_ALT
CXX_FLAGS += -DTARGET_KPSDK_MCUS
CXX_FLAGS += -DTOOLCHAIN_GCC
CXX_FLAGS += -DTARGET_CORTEX_M
CXX_FLAGS += -DTARGET_KSDK2_MCUS
CXX_FLAGS += -DTARGET_LIKE_CORTEX_M4
CXX_FLAGS += -DDEVICE_ANALOGOUT=1
CXX_FLAGS += -DTARGET_M4
CXX_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
CXX_FLAGS += -DMBED_BUILD_TIMESTAMP=1519435319.41
CXX_FLAGS += -DTARGET_K64F
CXX_FLAGS += -DDEVICE_SERIAL=1
CXX_FLAGS += -DDEVICE_INTERRUPTIN=1
CXX_FLAGS += -DTARGET_CORTEX
CXX_FLAGS += -DDEVICE_I2C=1
CXX_FLAGS += -DDEVICE_PORTOUT=1
CXX_FLAGS += -D__CORTEX_M4
CXX_FLAGS += -DDEVICE_STDIO_MESSAGES=1
CXX_FLAGS += -DCPU_MK64FN1M0VMD12
CXX_FLAGS += -DFEATURE_IPV4=1
CXX_FLAGS += -DTARGET_LIKE_MBED
CXX_FLAGS += -DTARGET_FF_ARDUINO
CXX_FLAGS += -DTARGET_KPSDK_CODE
CXX_FLAGS += -DTARGET_RELEASE
CXX_FLAGS += -DDEVICE_SERIAL_FC=1
CXX_FLAGS += -DFEATURE_STORAGE=1
CXX_FLAGS += -D__MBED_CMSIS_RTOS_CM
CXX_FLAGS += -DDEVICE_SLEEP=1
CXX_FLAGS += -DTOOLCHAIN_GCC_ARM
CXX_FLAGS += -DTARGET_FRDM
CXX_FLAGS += -DDEVICE_SPI=1
CXX_FLAGS += -DDEVICE_ERROR_RED=1
CXX_FLAGS += -DDEVICE_SPISLAVE=1
CXX_FLAGS += -DDEVICE_ANALOGIN=1
CXX_FLAGS += -DDEVICE_PWMOUT=1
CXX_FLAGS += -DDEVICE_PORTIN=1
CXX_FLAGS += -DTARGET_MCU_K64F
CXX_FLAGS += -DARM_MATH_CM4
CXX_FLAGS += -include
CXX_FLAGS += mbed_config.h

ASM_FLAGS += -x
ASM_FLAGS += assembler-with-cpp
ASM_FLAGS += -D__CORTEX_M4
ASM_FLAGS += -DCPU_MK64FN1M0VMD12
ASM_FLAGS += -DARM_MATH_CM4
ASM_FLAGS += -D__FPU_PRESENT=1
ASM_FLAGS += -D__MBED_CMSIS_RTOS_CM
ASM_FLAGS += -D__CMSIS_RTOS
ASM_FLAGS += -DFSL_RTOS_MBED
ASM_FLAGS += -DMBEDTLS_ENTROPY_HARDWARE_ALT
ASM_FLAGS += -I.
ASM_FLAGS += -IESP8266
ASM_FLAGS += -IDHT
ASM_FLAGS += -IGT511C3
ASM_FLAGS += -Imbed-os/.
ASM_FLAGS += -Imbed-os/docs
ASM_FLAGS += -Imbed-os/features
ASM_FLAGS += -Imbed-os/features/frameworks
ASM_FLAGS += -Imbed-os/features/frameworks/greentea-client
ASM_FLAGS += -Imbed-os/features/frameworks/greentea-client/greentea-client
ASM_FLAGS += -Imbed-os/features/frameworks/greentea-client/source
ASM_FLAGS += -Imbed-os/features/frameworks/unity
ASM_FLAGS += -Imbed-os/features/frameworks/unity/source
ASM_FLAGS += -Imbed-os/features/frameworks/unity/unity
ASM_FLAGS += -Imbed-os/features/frameworks/utest
ASM_FLAGS += -Imbed-os/features/frameworks/utest/source
ASM_FLAGS += -Imbed-os/features/frameworks/utest/utest
ASM_FLAGS += -Imbed-os/features/mbedtls
ASM_FLAGS += -Imbed-os/features/mbedtls/importer
ASM_FLAGS += -Imbed-os/features/mbedtls/inc
ASM_FLAGS += -Imbed-os/features/mbedtls/inc/mbedtls
ASM_FLAGS += -Imbed-os/features/mbedtls/src
ASM_FLAGS += -Imbed-os/features/net
ASM_FLAGS += -Imbed-os/features/net/network-socket
ASM_FLAGS += -Imbed-os/features/net/network-socket/DnsQuery
ASM_FLAGS += -Imbed-os/features/storage
ASM_FLAGS += -Imbed-os/hal
ASM_FLAGS += -Imbed-os/hal/api
ASM_FLAGS += -Imbed-os/hal/common
ASM_FLAGS += -Imbed-os/hal/hal
ASM_FLAGS += -Imbed-os/hal/hal/storage_abstraction
ASM_FLAGS += -Imbed-os/hal/targets
ASM_FLAGS += -Imbed-os/hal/targets/cmsis
ASM_FLAGS += -Imbed-os/hal/targets/cmsis/TARGET_Freescale
ASM_FLAGS += -Imbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F
ASM_FLAGS += -Imbed-os/hal/targets/cmsis/TARGET_Freescale/TARGET_K64F/TOOLCHAIN_GCC_ARM
ASM_FLAGS += -Imbed-os/hal/targets/cmsis/TOOLCHAIN_GCC
ASM_FLAGS += -Imbed-os/hal/targets/hal
ASM_FLAGS += -Imbed-os/hal/targets/hal/TARGET_Freescale
ASM_FLAGS += -Imbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS
ASM_FLAGS += -Imbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F
ASM_FLAGS += -Imbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/TARGET_FRDM
ASM_FLAGS += -Imbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/TARGET_K64F/drivers
ASM_FLAGS += -Imbed-os/hal/targets/hal/TARGET_Freescale/TARGET_KSDK2_MCUS/api
ASM_FLAGS += -Imbed-os/rtos
ASM_FLAGS += -Imbed-os/rtos/rtos
ASM_FLAGS += -Imbed-os/rtos/rtx
ASM_FLAGS += -Imbed-os/rtos/rtx/TARGET_CORTEX_M
ASM_FLAGS += -Imbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_RTOS_M4_M7
ASM_FLAGS += -Imbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_RTOS_M4_M7/TOOLCHAIN_GCC
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore/configuration-store
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore/doc
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/design
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/design/pics
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/design/umlet
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore/doc/project
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/cfstore/source
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/flash-journal
ASM_FLAGS += -Imbed-os/features/storage/FEATURE_STORAGE/flash-journal/flash-journal-strategy-sequential
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth/arch
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-eth/arch/TARGET_Freescale
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-sys
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip-sys/arch
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/api
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/ipv4
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/core/snmp
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/ipv4
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/ipv4/lwip
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/lwip
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/include/netif
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif
ASM_FLAGS += -Imbed-os/features/net/FEATURE_IPV4/lwip-interface/lwip/netif/ppp


LD_FLAGS :=-Wl,--gc-sections -Wl,--wrap,main -Wl,--wrap,_malloc_r -Wl,--wrap,_free_r -Wl,--wrap,_realloc_r -Wl,--wrap,_memalign_r -Wl,--wrap,_calloc_r -Wl,--wrap,exit -Wl,--wrap,atexit -Wl,-n -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=softfp 
LD_SYS_LIBS :=-Wl,--start-group -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys  -Wl,--end-group

# Tools and Flags
###############################################################################
# Rules

.PHONY: all lst size


all: $(PROJECT).bin $(PROJECT).hex size


.s.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  


.S.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  

.c.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CC) $(C_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.cpp.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CPP) $(CXX_FLAGS) $(INCLUDE_PATHS) -o $@ $<


$(PROJECT).link_script.ld: $(LINKER_SCRIPT)
	@$(PREPROC) $< -o $@



$(PROJECT).elf: $(OBJECTS) $(SYS_OBJECTS) $(PROJECT).link_script.ld 
	+@echo "link: $(notdir $@)"
	@$(LD) $(LD_FLAGS) -T $(filter-out %.o, $^) $(LIBRARY_PATHS) --output $@ $(filter %.o, $^) $(LIBRARIES) $(LD_SYS_LIBS)


$(PROJECT).bin: $(PROJECT).elf
	$(ELF2BIN) -O binary $< $@
	+@echo "===== bin file ready to flash: $(OBJDIR)/$@ =====" 

$(PROJECT).hex: $(PROJECT).elf
	$(ELF2BIN) -O ihex $< $@


# Rules
###############################################################################
# Dependencies

DEPS = $(OBJECTS:.o=.d) $(SYS_OBJECTS:.o=.d)
-include $(DEPS)
endif

# Dependencies
###############################################################################
