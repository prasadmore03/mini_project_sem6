// (c) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// (c) Copyright 2022-2024 Advanced Micro Devices, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of AMD and is protected under U.S. and international copyright
// and other intellectual property laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// AMD, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND AMD HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) AMD shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or AMD had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// AMD products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of AMD products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


#include "imageProcessingSystem_processing_system7_0_0_sc.h"

#include "imageProcessingSystem_processing_system7_0_0.h"

#include "processing_system7_v5_5_tlm.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
imageProcessingSystem_processing_system7_0_0::imageProcessingSystem_processing_system7_0_0(const sc_core::sc_module_name& nm) : imageProcessingSystem_processing_system7_0_0_sc(nm), TTC0_WAVE0_OUT("TTC0_WAVE0_OUT"), TTC0_WAVE1_OUT("TTC0_WAVE1_OUT"), TTC0_WAVE2_OUT("TTC0_WAVE2_OUT"), USB0_PORT_INDCTL("USB0_PORT_INDCTL"), USB0_VBUS_PWRSELECT("USB0_VBUS_PWRSELECT"), USB0_VBUS_PWRFAULT("USB0_VBUS_PWRFAULT"), M_AXI_GP0_ARVALID("M_AXI_GP0_ARVALID"), M_AXI_GP0_AWVALID("M_AXI_GP0_AWVALID"), M_AXI_GP0_BREADY("M_AXI_GP0_BREADY"), M_AXI_GP0_RREADY("M_AXI_GP0_RREADY"), M_AXI_GP0_WLAST("M_AXI_GP0_WLAST"), M_AXI_GP0_WVALID("M_AXI_GP0_WVALID"), M_AXI_GP0_ARID("M_AXI_GP0_ARID"), M_AXI_GP0_AWID("M_AXI_GP0_AWID"), M_AXI_GP0_WID("M_AXI_GP0_WID"), M_AXI_GP0_ARBURST("M_AXI_GP0_ARBURST"), M_AXI_GP0_ARLOCK("M_AXI_GP0_ARLOCK"), M_AXI_GP0_ARSIZE("M_AXI_GP0_ARSIZE"), M_AXI_GP0_AWBURST("M_AXI_GP0_AWBURST"), M_AXI_GP0_AWLOCK("M_AXI_GP0_AWLOCK"), M_AXI_GP0_AWSIZE("M_AXI_GP0_AWSIZE"), M_AXI_GP0_ARPROT("M_AXI_GP0_ARPROT"), M_AXI_GP0_AWPROT("M_AXI_GP0_AWPROT"), M_AXI_GP0_ARADDR("M_AXI_GP0_ARADDR"), M_AXI_GP0_AWADDR("M_AXI_GP0_AWADDR"), M_AXI_GP0_WDATA("M_AXI_GP0_WDATA"), M_AXI_GP0_ARCACHE("M_AXI_GP0_ARCACHE"), M_AXI_GP0_ARLEN("M_AXI_GP0_ARLEN"), M_AXI_GP0_ARQOS("M_AXI_GP0_ARQOS"), M_AXI_GP0_AWCACHE("M_AXI_GP0_AWCACHE"), M_AXI_GP0_AWLEN("M_AXI_GP0_AWLEN"), M_AXI_GP0_AWQOS("M_AXI_GP0_AWQOS"), M_AXI_GP0_WSTRB("M_AXI_GP0_WSTRB"), M_AXI_GP0_ACLK("M_AXI_GP0_ACLK"), M_AXI_GP0_ARREADY("M_AXI_GP0_ARREADY"), M_AXI_GP0_AWREADY("M_AXI_GP0_AWREADY"), M_AXI_GP0_BVALID("M_AXI_GP0_BVALID"), M_AXI_GP0_RLAST("M_AXI_GP0_RLAST"), M_AXI_GP0_RVALID("M_AXI_GP0_RVALID"), M_AXI_GP0_WREADY("M_AXI_GP0_WREADY"), M_AXI_GP0_BID("M_AXI_GP0_BID"), M_AXI_GP0_RID("M_AXI_GP0_RID"), M_AXI_GP0_BRESP("M_AXI_GP0_BRESP"), M_AXI_GP0_RRESP("M_AXI_GP0_RRESP"), M_AXI_GP0_RDATA("M_AXI_GP0_RDATA"), S_AXI_ACP_ARREADY("S_AXI_ACP_ARREADY"), S_AXI_ACP_AWREADY("S_AXI_ACP_AWREADY"), S_AXI_ACP_BVALID("S_AXI_ACP_BVALID"), S_AXI_ACP_RLAST("S_AXI_ACP_RLAST"), S_AXI_ACP_RVALID("S_AXI_ACP_RVALID"), S_AXI_ACP_WREADY("S_AXI_ACP_WREADY"), S_AXI_ACP_BRESP("S_AXI_ACP_BRESP"), S_AXI_ACP_RRESP("S_AXI_ACP_RRESP"), S_AXI_ACP_BID("S_AXI_ACP_BID"), S_AXI_ACP_RID("S_AXI_ACP_RID"), S_AXI_ACP_RDATA("S_AXI_ACP_RDATA"), S_AXI_ACP_ACLK("S_AXI_ACP_ACLK"), S_AXI_ACP_ARVALID("S_AXI_ACP_ARVALID"), S_AXI_ACP_AWVALID("S_AXI_ACP_AWVALID"), S_AXI_ACP_BREADY("S_AXI_ACP_BREADY"), S_AXI_ACP_RREADY("S_AXI_ACP_RREADY"), S_AXI_ACP_WLAST("S_AXI_ACP_WLAST"), S_AXI_ACP_WVALID("S_AXI_ACP_WVALID"), S_AXI_ACP_ARID("S_AXI_ACP_ARID"), S_AXI_ACP_ARPROT("S_AXI_ACP_ARPROT"), S_AXI_ACP_AWID("S_AXI_ACP_AWID"), S_AXI_ACP_AWPROT("S_AXI_ACP_AWPROT"), S_AXI_ACP_WID("S_AXI_ACP_WID"), S_AXI_ACP_ARADDR("S_AXI_ACP_ARADDR"), S_AXI_ACP_AWADDR("S_AXI_ACP_AWADDR"), S_AXI_ACP_ARCACHE("S_AXI_ACP_ARCACHE"), S_AXI_ACP_ARLEN("S_AXI_ACP_ARLEN"), S_AXI_ACP_ARQOS("S_AXI_ACP_ARQOS"), S_AXI_ACP_AWCACHE("S_AXI_ACP_AWCACHE"), S_AXI_ACP_AWLEN("S_AXI_ACP_AWLEN"), S_AXI_ACP_AWQOS("S_AXI_ACP_AWQOS"), S_AXI_ACP_ARBURST("S_AXI_ACP_ARBURST"), S_AXI_ACP_ARLOCK("S_AXI_ACP_ARLOCK"), S_AXI_ACP_ARSIZE("S_AXI_ACP_ARSIZE"), S_AXI_ACP_AWBURST("S_AXI_ACP_AWBURST"), S_AXI_ACP_AWLOCK("S_AXI_ACP_AWLOCK"), S_AXI_ACP_AWSIZE("S_AXI_ACP_AWSIZE"), S_AXI_ACP_ARUSER("S_AXI_ACP_ARUSER"), S_AXI_ACP_AWUSER("S_AXI_ACP_AWUSER"), S_AXI_ACP_WDATA("S_AXI_ACP_WDATA"), S_AXI_ACP_WSTRB("S_AXI_ACP_WSTRB"), IRQ_F2P("IRQ_F2P"), FCLK_CLK0("FCLK_CLK0"), FCLK_RESET0_N("FCLK_RESET0_N"), MIO("MIO"), DDR_CAS_n("DDR_CAS_n"), DDR_CKE("DDR_CKE"), DDR_Clk_n("DDR_Clk_n"), DDR_Clk("DDR_Clk"), DDR_CS_n("DDR_CS_n"), DDR_DRSTB("DDR_DRSTB"), DDR_ODT("DDR_ODT"), DDR_RAS_n("DDR_RAS_n"), DDR_WEB("DDR_WEB"), DDR_BankAddr("DDR_BankAddr"), DDR_Addr("DDR_Addr"), DDR_VRN("DDR_VRN"), DDR_VRP("DDR_VRP"), DDR_DM("DDR_DM"), DDR_DQ("DDR_DQ"), DDR_DQS_n("DDR_DQS_n"), DDR_DQS("DDR_DQS"), PS_SRSTB("PS_SRSTB"), PS_CLK("PS_CLK"), PS_PORB("PS_PORB")
{

  // initialize pins
  mp_impl->TTC0_WAVE0_OUT(TTC0_WAVE0_OUT);
  mp_impl->TTC0_WAVE1_OUT(TTC0_WAVE1_OUT);
  mp_impl->TTC0_WAVE2_OUT(TTC0_WAVE2_OUT);
  mp_impl->USB0_PORT_INDCTL(USB0_PORT_INDCTL);
  mp_impl->USB0_VBUS_PWRSELECT(USB0_VBUS_PWRSELECT);
  mp_impl->USB0_VBUS_PWRFAULT(USB0_VBUS_PWRFAULT);
  mp_impl->M_AXI_GP0_ACLK(M_AXI_GP0_ACLK);
  mp_impl->S_AXI_ACP_ACLK(S_AXI_ACP_ACLK);
  mp_impl->IRQ_F2P(IRQ_F2P);
  mp_impl->FCLK_CLK0(FCLK_CLK0);
  mp_impl->FCLK_RESET0_N(FCLK_RESET0_N);
  mp_impl->MIO(MIO);
  mp_impl->DDR_CAS_n(DDR_CAS_n);
  mp_impl->DDR_CKE(DDR_CKE);
  mp_impl->DDR_Clk_n(DDR_Clk_n);
  mp_impl->DDR_Clk(DDR_Clk);
  mp_impl->DDR_CS_n(DDR_CS_n);
  mp_impl->DDR_DRSTB(DDR_DRSTB);
  mp_impl->DDR_ODT(DDR_ODT);
  mp_impl->DDR_RAS_n(DDR_RAS_n);
  mp_impl->DDR_WEB(DDR_WEB);
  mp_impl->DDR_BankAddr(DDR_BankAddr);
  mp_impl->DDR_Addr(DDR_Addr);
  mp_impl->DDR_VRN(DDR_VRN);
  mp_impl->DDR_VRP(DDR_VRP);
  mp_impl->DDR_DM(DDR_DM);
  mp_impl->DDR_DQ(DDR_DQ);
  mp_impl->DDR_DQS_n(DDR_DQS_n);
  mp_impl->DDR_DQS(DDR_DQS);
  mp_impl->PS_SRSTB(PS_SRSTB);
  mp_impl->PS_CLK(PS_CLK);
  mp_impl->PS_PORB(PS_PORB);

  // initialize transactors
  mp_M_AXI_GP0_transactor = NULL;
  mp_M_AXI_GP0_ARLOCK_converter = NULL;
  mp_M_AXI_GP0_AWLOCK_converter = NULL;
  mp_M_AXI_GP0_ARLEN_converter = NULL;
  mp_M_AXI_GP0_AWLEN_converter = NULL;
  mp_S_AXI_ACP_transactor = NULL;
  mp_S_AXI_ACP_ARLEN_converter = NULL;
  mp_S_AXI_ACP_AWLEN_converter = NULL;
  mp_S_AXI_ACP_ARLOCK_converter = NULL;
  mp_S_AXI_ACP_AWLOCK_converter = NULL;

  // initialize socket stubs

}

void imageProcessingSystem_processing_system7_0_0::before_end_of_elaboration()
{
  // configure 'M_AXI_GP0' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "M_AXI_GP0_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M_AXI_GP0' transactor parameters
    xsc::common_cpp::properties M_AXI_GP0_transactor_param_props;
    M_AXI_GP0_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("DATA_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M_AXI_GP0_transactor_param_props.addLong("ID_WIDTH", "12");
    M_AXI_GP0_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BURST", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_LOCK", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_PROT", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_CACHE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_QOS", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_REGION", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_WSTRB", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_SIZE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RESET", "0");
    M_AXI_GP0_transactor_param_props.addFloat("PHASE", "0.0");
    M_AXI_GP0_transactor_param_props.addString("PROTOCOL", "AXI3");
    M_AXI_GP0_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M_AXI_GP0_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_M_AXI_GP0_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,12,1,1,1,1,1>("M_AXI_GP0_transactor", M_AXI_GP0_transactor_param_props);

    // M_AXI_GP0' transactor ports

    mp_M_AXI_GP0_transactor->ARVALID(M_AXI_GP0_ARVALID);
    mp_M_AXI_GP0_transactor->AWVALID(M_AXI_GP0_AWVALID);
    mp_M_AXI_GP0_transactor->BREADY(M_AXI_GP0_BREADY);
    mp_M_AXI_GP0_transactor->RREADY(M_AXI_GP0_RREADY);
    mp_M_AXI_GP0_transactor->WLAST(M_AXI_GP0_WLAST);
    mp_M_AXI_GP0_transactor->WVALID(M_AXI_GP0_WVALID);
    mp_M_AXI_GP0_transactor->ARID(M_AXI_GP0_ARID);
    mp_M_AXI_GP0_transactor->AWID(M_AXI_GP0_AWID);
    mp_M_AXI_GP0_transactor->ARBURST(M_AXI_GP0_ARBURST);
    mp_M_AXI_GP0_ARLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_ARLOCK_converter");
    mp_M_AXI_GP0_ARLOCK_converter->scalar_in(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_ARLOCK_converter->vector_out(M_AXI_GP0_ARLOCK);
    mp_M_AXI_GP0_transactor->ARLOCK(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->ARSIZE(M_AXI_GP0_ARSIZE);
    mp_M_AXI_GP0_transactor->AWBURST(M_AXI_GP0_AWBURST);
    mp_M_AXI_GP0_AWLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_AWLOCK_converter");
    mp_M_AXI_GP0_AWLOCK_converter->scalar_in(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_AWLOCK_converter->vector_out(M_AXI_GP0_AWLOCK);
    mp_M_AXI_GP0_transactor->AWLOCK(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->AWSIZE(M_AXI_GP0_AWSIZE);
    mp_M_AXI_GP0_transactor->ARPROT(M_AXI_GP0_ARPROT);
    mp_M_AXI_GP0_transactor->AWPROT(M_AXI_GP0_AWPROT);
    mp_M_AXI_GP0_transactor->ARADDR(M_AXI_GP0_ARADDR);
    mp_M_AXI_GP0_transactor->AWADDR(M_AXI_GP0_AWADDR);
    mp_M_AXI_GP0_transactor->WDATA(M_AXI_GP0_WDATA);
    mp_M_AXI_GP0_transactor->ARCACHE(M_AXI_GP0_ARCACHE);
    mp_M_AXI_GP0_ARLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_ARLEN_converter");
    mp_M_AXI_GP0_ARLEN_converter->vector_in(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_ARLEN_converter->vector_out(M_AXI_GP0_ARLEN);
    mp_M_AXI_GP0_transactor->ARLEN(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_transactor->ARQOS(M_AXI_GP0_ARQOS);
    mp_M_AXI_GP0_transactor->AWCACHE(M_AXI_GP0_AWCACHE);
    mp_M_AXI_GP0_AWLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_AWLEN_converter");
    mp_M_AXI_GP0_AWLEN_converter->vector_in(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_AWLEN_converter->vector_out(M_AXI_GP0_AWLEN);
    mp_M_AXI_GP0_transactor->AWLEN(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_transactor->AWQOS(M_AXI_GP0_AWQOS);
    mp_M_AXI_GP0_transactor->WSTRB(M_AXI_GP0_WSTRB);
    mp_M_AXI_GP0_transactor->ARREADY(M_AXI_GP0_ARREADY);
    mp_M_AXI_GP0_transactor->AWREADY(M_AXI_GP0_AWREADY);
    mp_M_AXI_GP0_transactor->BVALID(M_AXI_GP0_BVALID);
    mp_M_AXI_GP0_transactor->RLAST(M_AXI_GP0_RLAST);
    mp_M_AXI_GP0_transactor->RVALID(M_AXI_GP0_RVALID);
    mp_M_AXI_GP0_transactor->WREADY(M_AXI_GP0_WREADY);
    mp_M_AXI_GP0_transactor->BID(M_AXI_GP0_BID);
    mp_M_AXI_GP0_transactor->RID(M_AXI_GP0_RID);
    mp_M_AXI_GP0_transactor->BRESP(M_AXI_GP0_BRESP);
    mp_M_AXI_GP0_transactor->RRESP(M_AXI_GP0_RRESP);
    mp_M_AXI_GP0_transactor->RDATA(M_AXI_GP0_RDATA);
    mp_M_AXI_GP0_transactor->CLK(M_AXI_GP0_ACLK);
    m_M_AXI_GP0_transactor_rst_signal.write(1);
    mp_M_AXI_GP0_transactor->RST(m_M_AXI_GP0_transactor_rst_signal);

    // M_AXI_GP0' transactor sockets

    mp_impl->M_AXI_GP0_rd_socket->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_impl->M_AXI_GP0_wr_socket->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'S_AXI_ACP' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "S_AXI_ACP_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S_AXI_ACP' transactor parameters
    xsc::common_cpp::properties S_AXI_ACP_transactor_param_props;
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("DATA_WIDTH", "64");
    S_AXI_ACP_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S_AXI_ACP_transactor_param_props.addLong("ID_WIDTH", "3");
    S_AXI_ACP_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S_AXI_ACP_transactor_param_props.addLong("AWUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("ARUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BURST", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_LOCK", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_PROT", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_CACHE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_QOS", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_WSTRB", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_ACP_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_SIZE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RESET", "0");
    S_AXI_ACP_transactor_param_props.addFloat("PHASE", "0.0");
    S_AXI_ACP_transactor_param_props.addString("PROTOCOL", "AXI3");
    S_AXI_ACP_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_ACP_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_S_AXI_ACP_transactor = new xtlm::xaximm_pin2xtlm_t<64,32,3,5,1,1,5,1>("S_AXI_ACP_transactor", S_AXI_ACP_transactor_param_props);

    // S_AXI_ACP' transactor ports

    mp_S_AXI_ACP_transactor->ARREADY(S_AXI_ACP_ARREADY);
    mp_S_AXI_ACP_transactor->AWREADY(S_AXI_ACP_AWREADY);
    mp_S_AXI_ACP_transactor->BVALID(S_AXI_ACP_BVALID);
    mp_S_AXI_ACP_transactor->RLAST(S_AXI_ACP_RLAST);
    mp_S_AXI_ACP_transactor->RVALID(S_AXI_ACP_RVALID);
    mp_S_AXI_ACP_transactor->WREADY(S_AXI_ACP_WREADY);
    mp_S_AXI_ACP_transactor->BRESP(S_AXI_ACP_BRESP);
    mp_S_AXI_ACP_transactor->RRESP(S_AXI_ACP_RRESP);
    mp_S_AXI_ACP_transactor->BID(S_AXI_ACP_BID);
    mp_S_AXI_ACP_transactor->RID(S_AXI_ACP_RID);
    mp_S_AXI_ACP_transactor->RDATA(S_AXI_ACP_RDATA);
    mp_S_AXI_ACP_transactor->ARVALID(S_AXI_ACP_ARVALID);
    mp_S_AXI_ACP_transactor->AWVALID(S_AXI_ACP_AWVALID);
    mp_S_AXI_ACP_transactor->BREADY(S_AXI_ACP_BREADY);
    mp_S_AXI_ACP_transactor->RREADY(S_AXI_ACP_RREADY);
    mp_S_AXI_ACP_transactor->WLAST(S_AXI_ACP_WLAST);
    mp_S_AXI_ACP_transactor->WVALID(S_AXI_ACP_WVALID);
    mp_S_AXI_ACP_transactor->ARID(S_AXI_ACP_ARID);
    mp_S_AXI_ACP_transactor->ARPROT(S_AXI_ACP_ARPROT);
    mp_S_AXI_ACP_transactor->AWID(S_AXI_ACP_AWID);
    mp_S_AXI_ACP_transactor->AWPROT(S_AXI_ACP_AWPROT);
    mp_S_AXI_ACP_transactor->ARADDR(S_AXI_ACP_ARADDR);
    mp_S_AXI_ACP_transactor->AWADDR(S_AXI_ACP_AWADDR);
    mp_S_AXI_ACP_transactor->ARCACHE(S_AXI_ACP_ARCACHE);
    mp_S_AXI_ACP_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_ARLEN_converter");
    mp_S_AXI_ACP_ARLEN_converter->vector_in(S_AXI_ACP_ARLEN);
    mp_S_AXI_ACP_ARLEN_converter->vector_out(m_S_AXI_ACP_ARLEN_converter_signal);
    mp_S_AXI_ACP_transactor->ARLEN(m_S_AXI_ACP_ARLEN_converter_signal);
    mp_S_AXI_ACP_transactor->ARQOS(S_AXI_ACP_ARQOS);
    mp_S_AXI_ACP_transactor->AWCACHE(S_AXI_ACP_AWCACHE);
    mp_S_AXI_ACP_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_AWLEN_converter");
    mp_S_AXI_ACP_AWLEN_converter->vector_in(S_AXI_ACP_AWLEN);
    mp_S_AXI_ACP_AWLEN_converter->vector_out(m_S_AXI_ACP_AWLEN_converter_signal);
    mp_S_AXI_ACP_transactor->AWLEN(m_S_AXI_ACP_AWLEN_converter_signal);
    mp_S_AXI_ACP_transactor->AWQOS(S_AXI_ACP_AWQOS);
    mp_S_AXI_ACP_transactor->ARBURST(S_AXI_ACP_ARBURST);
    mp_S_AXI_ACP_ARLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_ARLOCK_converter");
    mp_S_AXI_ACP_ARLOCK_converter->vector_in(S_AXI_ACP_ARLOCK);
    mp_S_AXI_ACP_ARLOCK_converter->scalar_out(m_S_AXI_ACP_ARLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->ARLOCK(m_S_AXI_ACP_ARLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->ARSIZE(S_AXI_ACP_ARSIZE);
    mp_S_AXI_ACP_transactor->AWBURST(S_AXI_ACP_AWBURST);
    mp_S_AXI_ACP_AWLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_AWLOCK_converter");
    mp_S_AXI_ACP_AWLOCK_converter->vector_in(S_AXI_ACP_AWLOCK);
    mp_S_AXI_ACP_AWLOCK_converter->scalar_out(m_S_AXI_ACP_AWLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->AWLOCK(m_S_AXI_ACP_AWLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->AWSIZE(S_AXI_ACP_AWSIZE);
    mp_S_AXI_ACP_transactor->ARUSER(S_AXI_ACP_ARUSER);
    mp_S_AXI_ACP_transactor->AWUSER(S_AXI_ACP_AWUSER);
    mp_S_AXI_ACP_transactor->WDATA(S_AXI_ACP_WDATA);
    mp_S_AXI_ACP_transactor->WSTRB(S_AXI_ACP_WSTRB);
    mp_S_AXI_ACP_transactor->CLK(S_AXI_ACP_ACLK);
    m_S_AXI_ACP_transactor_rst_signal.write(1);
    mp_S_AXI_ACP_transactor->RST(m_S_AXI_ACP_transactor_rst_signal);

    // S_AXI_ACP' transactor sockets

    mp_impl->S_AXI_ACP_rd_socket->bind(*(mp_S_AXI_ACP_transactor->rd_socket));
    mp_impl->S_AXI_ACP_wr_socket->bind(*(mp_S_AXI_ACP_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
imageProcessingSystem_processing_system7_0_0::imageProcessingSystem_processing_system7_0_0(const sc_core::sc_module_name& nm) : imageProcessingSystem_processing_system7_0_0_sc(nm), TTC0_WAVE0_OUT("TTC0_WAVE0_OUT"), TTC0_WAVE1_OUT("TTC0_WAVE1_OUT"), TTC0_WAVE2_OUT("TTC0_WAVE2_OUT"), USB0_PORT_INDCTL("USB0_PORT_INDCTL"), USB0_VBUS_PWRSELECT("USB0_VBUS_PWRSELECT"), USB0_VBUS_PWRFAULT("USB0_VBUS_PWRFAULT"), M_AXI_GP0_ARVALID("M_AXI_GP0_ARVALID"), M_AXI_GP0_AWVALID("M_AXI_GP0_AWVALID"), M_AXI_GP0_BREADY("M_AXI_GP0_BREADY"), M_AXI_GP0_RREADY("M_AXI_GP0_RREADY"), M_AXI_GP0_WLAST("M_AXI_GP0_WLAST"), M_AXI_GP0_WVALID("M_AXI_GP0_WVALID"), M_AXI_GP0_ARID("M_AXI_GP0_ARID"), M_AXI_GP0_AWID("M_AXI_GP0_AWID"), M_AXI_GP0_WID("M_AXI_GP0_WID"), M_AXI_GP0_ARBURST("M_AXI_GP0_ARBURST"), M_AXI_GP0_ARLOCK("M_AXI_GP0_ARLOCK"), M_AXI_GP0_ARSIZE("M_AXI_GP0_ARSIZE"), M_AXI_GP0_AWBURST("M_AXI_GP0_AWBURST"), M_AXI_GP0_AWLOCK("M_AXI_GP0_AWLOCK"), M_AXI_GP0_AWSIZE("M_AXI_GP0_AWSIZE"), M_AXI_GP0_ARPROT("M_AXI_GP0_ARPROT"), M_AXI_GP0_AWPROT("M_AXI_GP0_AWPROT"), M_AXI_GP0_ARADDR("M_AXI_GP0_ARADDR"), M_AXI_GP0_AWADDR("M_AXI_GP0_AWADDR"), M_AXI_GP0_WDATA("M_AXI_GP0_WDATA"), M_AXI_GP0_ARCACHE("M_AXI_GP0_ARCACHE"), M_AXI_GP0_ARLEN("M_AXI_GP0_ARLEN"), M_AXI_GP0_ARQOS("M_AXI_GP0_ARQOS"), M_AXI_GP0_AWCACHE("M_AXI_GP0_AWCACHE"), M_AXI_GP0_AWLEN("M_AXI_GP0_AWLEN"), M_AXI_GP0_AWQOS("M_AXI_GP0_AWQOS"), M_AXI_GP0_WSTRB("M_AXI_GP0_WSTRB"), M_AXI_GP0_ACLK("M_AXI_GP0_ACLK"), M_AXI_GP0_ARREADY("M_AXI_GP0_ARREADY"), M_AXI_GP0_AWREADY("M_AXI_GP0_AWREADY"), M_AXI_GP0_BVALID("M_AXI_GP0_BVALID"), M_AXI_GP0_RLAST("M_AXI_GP0_RLAST"), M_AXI_GP0_RVALID("M_AXI_GP0_RVALID"), M_AXI_GP0_WREADY("M_AXI_GP0_WREADY"), M_AXI_GP0_BID("M_AXI_GP0_BID"), M_AXI_GP0_RID("M_AXI_GP0_RID"), M_AXI_GP0_BRESP("M_AXI_GP0_BRESP"), M_AXI_GP0_RRESP("M_AXI_GP0_RRESP"), M_AXI_GP0_RDATA("M_AXI_GP0_RDATA"), S_AXI_ACP_ARREADY("S_AXI_ACP_ARREADY"), S_AXI_ACP_AWREADY("S_AXI_ACP_AWREADY"), S_AXI_ACP_BVALID("S_AXI_ACP_BVALID"), S_AXI_ACP_RLAST("S_AXI_ACP_RLAST"), S_AXI_ACP_RVALID("S_AXI_ACP_RVALID"), S_AXI_ACP_WREADY("S_AXI_ACP_WREADY"), S_AXI_ACP_BRESP("S_AXI_ACP_BRESP"), S_AXI_ACP_RRESP("S_AXI_ACP_RRESP"), S_AXI_ACP_BID("S_AXI_ACP_BID"), S_AXI_ACP_RID("S_AXI_ACP_RID"), S_AXI_ACP_RDATA("S_AXI_ACP_RDATA"), S_AXI_ACP_ACLK("S_AXI_ACP_ACLK"), S_AXI_ACP_ARVALID("S_AXI_ACP_ARVALID"), S_AXI_ACP_AWVALID("S_AXI_ACP_AWVALID"), S_AXI_ACP_BREADY("S_AXI_ACP_BREADY"), S_AXI_ACP_RREADY("S_AXI_ACP_RREADY"), S_AXI_ACP_WLAST("S_AXI_ACP_WLAST"), S_AXI_ACP_WVALID("S_AXI_ACP_WVALID"), S_AXI_ACP_ARID("S_AXI_ACP_ARID"), S_AXI_ACP_ARPROT("S_AXI_ACP_ARPROT"), S_AXI_ACP_AWID("S_AXI_ACP_AWID"), S_AXI_ACP_AWPROT("S_AXI_ACP_AWPROT"), S_AXI_ACP_WID("S_AXI_ACP_WID"), S_AXI_ACP_ARADDR("S_AXI_ACP_ARADDR"), S_AXI_ACP_AWADDR("S_AXI_ACP_AWADDR"), S_AXI_ACP_ARCACHE("S_AXI_ACP_ARCACHE"), S_AXI_ACP_ARLEN("S_AXI_ACP_ARLEN"), S_AXI_ACP_ARQOS("S_AXI_ACP_ARQOS"), S_AXI_ACP_AWCACHE("S_AXI_ACP_AWCACHE"), S_AXI_ACP_AWLEN("S_AXI_ACP_AWLEN"), S_AXI_ACP_AWQOS("S_AXI_ACP_AWQOS"), S_AXI_ACP_ARBURST("S_AXI_ACP_ARBURST"), S_AXI_ACP_ARLOCK("S_AXI_ACP_ARLOCK"), S_AXI_ACP_ARSIZE("S_AXI_ACP_ARSIZE"), S_AXI_ACP_AWBURST("S_AXI_ACP_AWBURST"), S_AXI_ACP_AWLOCK("S_AXI_ACP_AWLOCK"), S_AXI_ACP_AWSIZE("S_AXI_ACP_AWSIZE"), S_AXI_ACP_ARUSER("S_AXI_ACP_ARUSER"), S_AXI_ACP_AWUSER("S_AXI_ACP_AWUSER"), S_AXI_ACP_WDATA("S_AXI_ACP_WDATA"), S_AXI_ACP_WSTRB("S_AXI_ACP_WSTRB"), IRQ_F2P("IRQ_F2P"), FCLK_CLK0("FCLK_CLK0"), FCLK_RESET0_N("FCLK_RESET0_N"), MIO("MIO"), DDR_CAS_n("DDR_CAS_n"), DDR_CKE("DDR_CKE"), DDR_Clk_n("DDR_Clk_n"), DDR_Clk("DDR_Clk"), DDR_CS_n("DDR_CS_n"), DDR_DRSTB("DDR_DRSTB"), DDR_ODT("DDR_ODT"), DDR_RAS_n("DDR_RAS_n"), DDR_WEB("DDR_WEB"), DDR_BankAddr("DDR_BankAddr"), DDR_Addr("DDR_Addr"), DDR_VRN("DDR_VRN"), DDR_VRP("DDR_VRP"), DDR_DM("DDR_DM"), DDR_DQ("DDR_DQ"), DDR_DQS_n("DDR_DQS_n"), DDR_DQS("DDR_DQS"), PS_SRSTB("PS_SRSTB"), PS_CLK("PS_CLK"), PS_PORB("PS_PORB")
{

  // initialize pins
  mp_impl->TTC0_WAVE0_OUT(TTC0_WAVE0_OUT);
  mp_impl->TTC0_WAVE1_OUT(TTC0_WAVE1_OUT);
  mp_impl->TTC0_WAVE2_OUT(TTC0_WAVE2_OUT);
  mp_impl->USB0_PORT_INDCTL(USB0_PORT_INDCTL);
  mp_impl->USB0_VBUS_PWRSELECT(USB0_VBUS_PWRSELECT);
  mp_impl->USB0_VBUS_PWRFAULT(USB0_VBUS_PWRFAULT);
  mp_impl->M_AXI_GP0_ACLK(M_AXI_GP0_ACLK);
  mp_impl->S_AXI_ACP_ACLK(S_AXI_ACP_ACLK);
  mp_impl->IRQ_F2P(IRQ_F2P);
  mp_impl->FCLK_CLK0(FCLK_CLK0);
  mp_impl->FCLK_RESET0_N(FCLK_RESET0_N);
  mp_impl->MIO(MIO);
  mp_impl->DDR_CAS_n(DDR_CAS_n);
  mp_impl->DDR_CKE(DDR_CKE);
  mp_impl->DDR_Clk_n(DDR_Clk_n);
  mp_impl->DDR_Clk(DDR_Clk);
  mp_impl->DDR_CS_n(DDR_CS_n);
  mp_impl->DDR_DRSTB(DDR_DRSTB);
  mp_impl->DDR_ODT(DDR_ODT);
  mp_impl->DDR_RAS_n(DDR_RAS_n);
  mp_impl->DDR_WEB(DDR_WEB);
  mp_impl->DDR_BankAddr(DDR_BankAddr);
  mp_impl->DDR_Addr(DDR_Addr);
  mp_impl->DDR_VRN(DDR_VRN);
  mp_impl->DDR_VRP(DDR_VRP);
  mp_impl->DDR_DM(DDR_DM);
  mp_impl->DDR_DQ(DDR_DQ);
  mp_impl->DDR_DQS_n(DDR_DQS_n);
  mp_impl->DDR_DQS(DDR_DQS);
  mp_impl->PS_SRSTB(PS_SRSTB);
  mp_impl->PS_CLK(PS_CLK);
  mp_impl->PS_PORB(PS_PORB);

  // initialize transactors
  mp_M_AXI_GP0_transactor = NULL;
  mp_M_AXI_GP0_ARLOCK_converter = NULL;
  mp_M_AXI_GP0_AWLOCK_converter = NULL;
  mp_M_AXI_GP0_ARLEN_converter = NULL;
  mp_M_AXI_GP0_AWLEN_converter = NULL;
  mp_S_AXI_ACP_transactor = NULL;
  mp_S_AXI_ACP_ARLEN_converter = NULL;
  mp_S_AXI_ACP_AWLEN_converter = NULL;
  mp_S_AXI_ACP_ARLOCK_converter = NULL;
  mp_S_AXI_ACP_AWLOCK_converter = NULL;

  // initialize socket stubs

}

void imageProcessingSystem_processing_system7_0_0::before_end_of_elaboration()
{
  // configure 'M_AXI_GP0' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "M_AXI_GP0_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M_AXI_GP0' transactor parameters
    xsc::common_cpp::properties M_AXI_GP0_transactor_param_props;
    M_AXI_GP0_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("DATA_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M_AXI_GP0_transactor_param_props.addLong("ID_WIDTH", "12");
    M_AXI_GP0_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BURST", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_LOCK", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_PROT", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_CACHE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_QOS", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_REGION", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_WSTRB", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_SIZE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RESET", "0");
    M_AXI_GP0_transactor_param_props.addFloat("PHASE", "0.0");
    M_AXI_GP0_transactor_param_props.addString("PROTOCOL", "AXI3");
    M_AXI_GP0_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M_AXI_GP0_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_M_AXI_GP0_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,12,1,1,1,1,1>("M_AXI_GP0_transactor", M_AXI_GP0_transactor_param_props);

    // M_AXI_GP0' transactor ports

    mp_M_AXI_GP0_transactor->ARVALID(M_AXI_GP0_ARVALID);
    mp_M_AXI_GP0_transactor->AWVALID(M_AXI_GP0_AWVALID);
    mp_M_AXI_GP0_transactor->BREADY(M_AXI_GP0_BREADY);
    mp_M_AXI_GP0_transactor->RREADY(M_AXI_GP0_RREADY);
    mp_M_AXI_GP0_transactor->WLAST(M_AXI_GP0_WLAST);
    mp_M_AXI_GP0_transactor->WVALID(M_AXI_GP0_WVALID);
    mp_M_AXI_GP0_transactor->ARID(M_AXI_GP0_ARID);
    mp_M_AXI_GP0_transactor->AWID(M_AXI_GP0_AWID);
    mp_M_AXI_GP0_transactor->ARBURST(M_AXI_GP0_ARBURST);
    mp_M_AXI_GP0_ARLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_ARLOCK_converter");
    mp_M_AXI_GP0_ARLOCK_converter->scalar_in(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_ARLOCK_converter->vector_out(M_AXI_GP0_ARLOCK);
    mp_M_AXI_GP0_transactor->ARLOCK(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->ARSIZE(M_AXI_GP0_ARSIZE);
    mp_M_AXI_GP0_transactor->AWBURST(M_AXI_GP0_AWBURST);
    mp_M_AXI_GP0_AWLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_AWLOCK_converter");
    mp_M_AXI_GP0_AWLOCK_converter->scalar_in(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_AWLOCK_converter->vector_out(M_AXI_GP0_AWLOCK);
    mp_M_AXI_GP0_transactor->AWLOCK(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->AWSIZE(M_AXI_GP0_AWSIZE);
    mp_M_AXI_GP0_transactor->ARPROT(M_AXI_GP0_ARPROT);
    mp_M_AXI_GP0_transactor->AWPROT(M_AXI_GP0_AWPROT);
    mp_M_AXI_GP0_transactor->ARADDR(M_AXI_GP0_ARADDR);
    mp_M_AXI_GP0_transactor->AWADDR(M_AXI_GP0_AWADDR);
    mp_M_AXI_GP0_transactor->WDATA(M_AXI_GP0_WDATA);
    mp_M_AXI_GP0_transactor->ARCACHE(M_AXI_GP0_ARCACHE);
    mp_M_AXI_GP0_ARLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_ARLEN_converter");
    mp_M_AXI_GP0_ARLEN_converter->vector_in(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_ARLEN_converter->vector_out(M_AXI_GP0_ARLEN);
    mp_M_AXI_GP0_transactor->ARLEN(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_transactor->ARQOS(M_AXI_GP0_ARQOS);
    mp_M_AXI_GP0_transactor->AWCACHE(M_AXI_GP0_AWCACHE);
    mp_M_AXI_GP0_AWLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_AWLEN_converter");
    mp_M_AXI_GP0_AWLEN_converter->vector_in(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_AWLEN_converter->vector_out(M_AXI_GP0_AWLEN);
    mp_M_AXI_GP0_transactor->AWLEN(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_transactor->AWQOS(M_AXI_GP0_AWQOS);
    mp_M_AXI_GP0_transactor->WSTRB(M_AXI_GP0_WSTRB);
    mp_M_AXI_GP0_transactor->ARREADY(M_AXI_GP0_ARREADY);
    mp_M_AXI_GP0_transactor->AWREADY(M_AXI_GP0_AWREADY);
    mp_M_AXI_GP0_transactor->BVALID(M_AXI_GP0_BVALID);
    mp_M_AXI_GP0_transactor->RLAST(M_AXI_GP0_RLAST);
    mp_M_AXI_GP0_transactor->RVALID(M_AXI_GP0_RVALID);
    mp_M_AXI_GP0_transactor->WREADY(M_AXI_GP0_WREADY);
    mp_M_AXI_GP0_transactor->BID(M_AXI_GP0_BID);
    mp_M_AXI_GP0_transactor->RID(M_AXI_GP0_RID);
    mp_M_AXI_GP0_transactor->BRESP(M_AXI_GP0_BRESP);
    mp_M_AXI_GP0_transactor->RRESP(M_AXI_GP0_RRESP);
    mp_M_AXI_GP0_transactor->RDATA(M_AXI_GP0_RDATA);
    mp_M_AXI_GP0_transactor->CLK(M_AXI_GP0_ACLK);
    m_M_AXI_GP0_transactor_rst_signal.write(1);
    mp_M_AXI_GP0_transactor->RST(m_M_AXI_GP0_transactor_rst_signal);

    // M_AXI_GP0' transactor sockets

    mp_impl->M_AXI_GP0_rd_socket->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_impl->M_AXI_GP0_wr_socket->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'S_AXI_ACP' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "S_AXI_ACP_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S_AXI_ACP' transactor parameters
    xsc::common_cpp::properties S_AXI_ACP_transactor_param_props;
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("DATA_WIDTH", "64");
    S_AXI_ACP_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S_AXI_ACP_transactor_param_props.addLong("ID_WIDTH", "3");
    S_AXI_ACP_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S_AXI_ACP_transactor_param_props.addLong("AWUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("ARUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BURST", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_LOCK", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_PROT", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_CACHE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_QOS", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_WSTRB", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_ACP_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_SIZE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RESET", "0");
    S_AXI_ACP_transactor_param_props.addFloat("PHASE", "0.0");
    S_AXI_ACP_transactor_param_props.addString("PROTOCOL", "AXI3");
    S_AXI_ACP_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_ACP_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_S_AXI_ACP_transactor = new xtlm::xaximm_pin2xtlm_t<64,32,3,5,1,1,5,1>("S_AXI_ACP_transactor", S_AXI_ACP_transactor_param_props);

    // S_AXI_ACP' transactor ports

    mp_S_AXI_ACP_transactor->ARREADY(S_AXI_ACP_ARREADY);
    mp_S_AXI_ACP_transactor->AWREADY(S_AXI_ACP_AWREADY);
    mp_S_AXI_ACP_transactor->BVALID(S_AXI_ACP_BVALID);
    mp_S_AXI_ACP_transactor->RLAST(S_AXI_ACP_RLAST);
    mp_S_AXI_ACP_transactor->RVALID(S_AXI_ACP_RVALID);
    mp_S_AXI_ACP_transactor->WREADY(S_AXI_ACP_WREADY);
    mp_S_AXI_ACP_transactor->BRESP(S_AXI_ACP_BRESP);
    mp_S_AXI_ACP_transactor->RRESP(S_AXI_ACP_RRESP);
    mp_S_AXI_ACP_transactor->BID(S_AXI_ACP_BID);
    mp_S_AXI_ACP_transactor->RID(S_AXI_ACP_RID);
    mp_S_AXI_ACP_transactor->RDATA(S_AXI_ACP_RDATA);
    mp_S_AXI_ACP_transactor->ARVALID(S_AXI_ACP_ARVALID);
    mp_S_AXI_ACP_transactor->AWVALID(S_AXI_ACP_AWVALID);
    mp_S_AXI_ACP_transactor->BREADY(S_AXI_ACP_BREADY);
    mp_S_AXI_ACP_transactor->RREADY(S_AXI_ACP_RREADY);
    mp_S_AXI_ACP_transactor->WLAST(S_AXI_ACP_WLAST);
    mp_S_AXI_ACP_transactor->WVALID(S_AXI_ACP_WVALID);
    mp_S_AXI_ACP_transactor->ARID(S_AXI_ACP_ARID);
    mp_S_AXI_ACP_transactor->ARPROT(S_AXI_ACP_ARPROT);
    mp_S_AXI_ACP_transactor->AWID(S_AXI_ACP_AWID);
    mp_S_AXI_ACP_transactor->AWPROT(S_AXI_ACP_AWPROT);
    mp_S_AXI_ACP_transactor->ARADDR(S_AXI_ACP_ARADDR);
    mp_S_AXI_ACP_transactor->AWADDR(S_AXI_ACP_AWADDR);
    mp_S_AXI_ACP_transactor->ARCACHE(S_AXI_ACP_ARCACHE);
    mp_S_AXI_ACP_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_ARLEN_converter");
    mp_S_AXI_ACP_ARLEN_converter->vector_in(S_AXI_ACP_ARLEN);
    mp_S_AXI_ACP_ARLEN_converter->vector_out(m_S_AXI_ACP_ARLEN_converter_signal);
    mp_S_AXI_ACP_transactor->ARLEN(m_S_AXI_ACP_ARLEN_converter_signal);
    mp_S_AXI_ACP_transactor->ARQOS(S_AXI_ACP_ARQOS);
    mp_S_AXI_ACP_transactor->AWCACHE(S_AXI_ACP_AWCACHE);
    mp_S_AXI_ACP_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_AWLEN_converter");
    mp_S_AXI_ACP_AWLEN_converter->vector_in(S_AXI_ACP_AWLEN);
    mp_S_AXI_ACP_AWLEN_converter->vector_out(m_S_AXI_ACP_AWLEN_converter_signal);
    mp_S_AXI_ACP_transactor->AWLEN(m_S_AXI_ACP_AWLEN_converter_signal);
    mp_S_AXI_ACP_transactor->AWQOS(S_AXI_ACP_AWQOS);
    mp_S_AXI_ACP_transactor->ARBURST(S_AXI_ACP_ARBURST);
    mp_S_AXI_ACP_ARLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_ARLOCK_converter");
    mp_S_AXI_ACP_ARLOCK_converter->vector_in(S_AXI_ACP_ARLOCK);
    mp_S_AXI_ACP_ARLOCK_converter->scalar_out(m_S_AXI_ACP_ARLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->ARLOCK(m_S_AXI_ACP_ARLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->ARSIZE(S_AXI_ACP_ARSIZE);
    mp_S_AXI_ACP_transactor->AWBURST(S_AXI_ACP_AWBURST);
    mp_S_AXI_ACP_AWLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_AWLOCK_converter");
    mp_S_AXI_ACP_AWLOCK_converter->vector_in(S_AXI_ACP_AWLOCK);
    mp_S_AXI_ACP_AWLOCK_converter->scalar_out(m_S_AXI_ACP_AWLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->AWLOCK(m_S_AXI_ACP_AWLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->AWSIZE(S_AXI_ACP_AWSIZE);
    mp_S_AXI_ACP_transactor->ARUSER(S_AXI_ACP_ARUSER);
    mp_S_AXI_ACP_transactor->AWUSER(S_AXI_ACP_AWUSER);
    mp_S_AXI_ACP_transactor->WDATA(S_AXI_ACP_WDATA);
    mp_S_AXI_ACP_transactor->WSTRB(S_AXI_ACP_WSTRB);
    mp_S_AXI_ACP_transactor->CLK(S_AXI_ACP_ACLK);
    m_S_AXI_ACP_transactor_rst_signal.write(1);
    mp_S_AXI_ACP_transactor->RST(m_S_AXI_ACP_transactor_rst_signal);

    // S_AXI_ACP' transactor sockets

    mp_impl->S_AXI_ACP_rd_socket->bind(*(mp_S_AXI_ACP_transactor->rd_socket));
    mp_impl->S_AXI_ACP_wr_socket->bind(*(mp_S_AXI_ACP_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XM_SYSTEMC




#ifdef RIVIERA
imageProcessingSystem_processing_system7_0_0::imageProcessingSystem_processing_system7_0_0(const sc_core::sc_module_name& nm) : imageProcessingSystem_processing_system7_0_0_sc(nm), TTC0_WAVE0_OUT("TTC0_WAVE0_OUT"), TTC0_WAVE1_OUT("TTC0_WAVE1_OUT"), TTC0_WAVE2_OUT("TTC0_WAVE2_OUT"), USB0_PORT_INDCTL("USB0_PORT_INDCTL"), USB0_VBUS_PWRSELECT("USB0_VBUS_PWRSELECT"), USB0_VBUS_PWRFAULT("USB0_VBUS_PWRFAULT"), M_AXI_GP0_ARVALID("M_AXI_GP0_ARVALID"), M_AXI_GP0_AWVALID("M_AXI_GP0_AWVALID"), M_AXI_GP0_BREADY("M_AXI_GP0_BREADY"), M_AXI_GP0_RREADY("M_AXI_GP0_RREADY"), M_AXI_GP0_WLAST("M_AXI_GP0_WLAST"), M_AXI_GP0_WVALID("M_AXI_GP0_WVALID"), M_AXI_GP0_ARID("M_AXI_GP0_ARID"), M_AXI_GP0_AWID("M_AXI_GP0_AWID"), M_AXI_GP0_WID("M_AXI_GP0_WID"), M_AXI_GP0_ARBURST("M_AXI_GP0_ARBURST"), M_AXI_GP0_ARLOCK("M_AXI_GP0_ARLOCK"), M_AXI_GP0_ARSIZE("M_AXI_GP0_ARSIZE"), M_AXI_GP0_AWBURST("M_AXI_GP0_AWBURST"), M_AXI_GP0_AWLOCK("M_AXI_GP0_AWLOCK"), M_AXI_GP0_AWSIZE("M_AXI_GP0_AWSIZE"), M_AXI_GP0_ARPROT("M_AXI_GP0_ARPROT"), M_AXI_GP0_AWPROT("M_AXI_GP0_AWPROT"), M_AXI_GP0_ARADDR("M_AXI_GP0_ARADDR"), M_AXI_GP0_AWADDR("M_AXI_GP0_AWADDR"), M_AXI_GP0_WDATA("M_AXI_GP0_WDATA"), M_AXI_GP0_ARCACHE("M_AXI_GP0_ARCACHE"), M_AXI_GP0_ARLEN("M_AXI_GP0_ARLEN"), M_AXI_GP0_ARQOS("M_AXI_GP0_ARQOS"), M_AXI_GP0_AWCACHE("M_AXI_GP0_AWCACHE"), M_AXI_GP0_AWLEN("M_AXI_GP0_AWLEN"), M_AXI_GP0_AWQOS("M_AXI_GP0_AWQOS"), M_AXI_GP0_WSTRB("M_AXI_GP0_WSTRB"), M_AXI_GP0_ACLK("M_AXI_GP0_ACLK"), M_AXI_GP0_ARREADY("M_AXI_GP0_ARREADY"), M_AXI_GP0_AWREADY("M_AXI_GP0_AWREADY"), M_AXI_GP0_BVALID("M_AXI_GP0_BVALID"), M_AXI_GP0_RLAST("M_AXI_GP0_RLAST"), M_AXI_GP0_RVALID("M_AXI_GP0_RVALID"), M_AXI_GP0_WREADY("M_AXI_GP0_WREADY"), M_AXI_GP0_BID("M_AXI_GP0_BID"), M_AXI_GP0_RID("M_AXI_GP0_RID"), M_AXI_GP0_BRESP("M_AXI_GP0_BRESP"), M_AXI_GP0_RRESP("M_AXI_GP0_RRESP"), M_AXI_GP0_RDATA("M_AXI_GP0_RDATA"), S_AXI_ACP_ARREADY("S_AXI_ACP_ARREADY"), S_AXI_ACP_AWREADY("S_AXI_ACP_AWREADY"), S_AXI_ACP_BVALID("S_AXI_ACP_BVALID"), S_AXI_ACP_RLAST("S_AXI_ACP_RLAST"), S_AXI_ACP_RVALID("S_AXI_ACP_RVALID"), S_AXI_ACP_WREADY("S_AXI_ACP_WREADY"), S_AXI_ACP_BRESP("S_AXI_ACP_BRESP"), S_AXI_ACP_RRESP("S_AXI_ACP_RRESP"), S_AXI_ACP_BID("S_AXI_ACP_BID"), S_AXI_ACP_RID("S_AXI_ACP_RID"), S_AXI_ACP_RDATA("S_AXI_ACP_RDATA"), S_AXI_ACP_ACLK("S_AXI_ACP_ACLK"), S_AXI_ACP_ARVALID("S_AXI_ACP_ARVALID"), S_AXI_ACP_AWVALID("S_AXI_ACP_AWVALID"), S_AXI_ACP_BREADY("S_AXI_ACP_BREADY"), S_AXI_ACP_RREADY("S_AXI_ACP_RREADY"), S_AXI_ACP_WLAST("S_AXI_ACP_WLAST"), S_AXI_ACP_WVALID("S_AXI_ACP_WVALID"), S_AXI_ACP_ARID("S_AXI_ACP_ARID"), S_AXI_ACP_ARPROT("S_AXI_ACP_ARPROT"), S_AXI_ACP_AWID("S_AXI_ACP_AWID"), S_AXI_ACP_AWPROT("S_AXI_ACP_AWPROT"), S_AXI_ACP_WID("S_AXI_ACP_WID"), S_AXI_ACP_ARADDR("S_AXI_ACP_ARADDR"), S_AXI_ACP_AWADDR("S_AXI_ACP_AWADDR"), S_AXI_ACP_ARCACHE("S_AXI_ACP_ARCACHE"), S_AXI_ACP_ARLEN("S_AXI_ACP_ARLEN"), S_AXI_ACP_ARQOS("S_AXI_ACP_ARQOS"), S_AXI_ACP_AWCACHE("S_AXI_ACP_AWCACHE"), S_AXI_ACP_AWLEN("S_AXI_ACP_AWLEN"), S_AXI_ACP_AWQOS("S_AXI_ACP_AWQOS"), S_AXI_ACP_ARBURST("S_AXI_ACP_ARBURST"), S_AXI_ACP_ARLOCK("S_AXI_ACP_ARLOCK"), S_AXI_ACP_ARSIZE("S_AXI_ACP_ARSIZE"), S_AXI_ACP_AWBURST("S_AXI_ACP_AWBURST"), S_AXI_ACP_AWLOCK("S_AXI_ACP_AWLOCK"), S_AXI_ACP_AWSIZE("S_AXI_ACP_AWSIZE"), S_AXI_ACP_ARUSER("S_AXI_ACP_ARUSER"), S_AXI_ACP_AWUSER("S_AXI_ACP_AWUSER"), S_AXI_ACP_WDATA("S_AXI_ACP_WDATA"), S_AXI_ACP_WSTRB("S_AXI_ACP_WSTRB"), IRQ_F2P("IRQ_F2P"), FCLK_CLK0("FCLK_CLK0"), FCLK_RESET0_N("FCLK_RESET0_N"), MIO("MIO"), DDR_CAS_n("DDR_CAS_n"), DDR_CKE("DDR_CKE"), DDR_Clk_n("DDR_Clk_n"), DDR_Clk("DDR_Clk"), DDR_CS_n("DDR_CS_n"), DDR_DRSTB("DDR_DRSTB"), DDR_ODT("DDR_ODT"), DDR_RAS_n("DDR_RAS_n"), DDR_WEB("DDR_WEB"), DDR_BankAddr("DDR_BankAddr"), DDR_Addr("DDR_Addr"), DDR_VRN("DDR_VRN"), DDR_VRP("DDR_VRP"), DDR_DM("DDR_DM"), DDR_DQ("DDR_DQ"), DDR_DQS_n("DDR_DQS_n"), DDR_DQS("DDR_DQS"), PS_SRSTB("PS_SRSTB"), PS_CLK("PS_CLK"), PS_PORB("PS_PORB")
{

  // initialize pins
  mp_impl->TTC0_WAVE0_OUT(TTC0_WAVE0_OUT);
  mp_impl->TTC0_WAVE1_OUT(TTC0_WAVE1_OUT);
  mp_impl->TTC0_WAVE2_OUT(TTC0_WAVE2_OUT);
  mp_impl->USB0_PORT_INDCTL(USB0_PORT_INDCTL);
  mp_impl->USB0_VBUS_PWRSELECT(USB0_VBUS_PWRSELECT);
  mp_impl->USB0_VBUS_PWRFAULT(USB0_VBUS_PWRFAULT);
  mp_impl->M_AXI_GP0_ACLK(M_AXI_GP0_ACLK);
  mp_impl->S_AXI_ACP_ACLK(S_AXI_ACP_ACLK);
  mp_impl->IRQ_F2P(IRQ_F2P);
  mp_impl->FCLK_CLK0(FCLK_CLK0);
  mp_impl->FCLK_RESET0_N(FCLK_RESET0_N);
  mp_impl->MIO(MIO);
  mp_impl->DDR_CAS_n(DDR_CAS_n);
  mp_impl->DDR_CKE(DDR_CKE);
  mp_impl->DDR_Clk_n(DDR_Clk_n);
  mp_impl->DDR_Clk(DDR_Clk);
  mp_impl->DDR_CS_n(DDR_CS_n);
  mp_impl->DDR_DRSTB(DDR_DRSTB);
  mp_impl->DDR_ODT(DDR_ODT);
  mp_impl->DDR_RAS_n(DDR_RAS_n);
  mp_impl->DDR_WEB(DDR_WEB);
  mp_impl->DDR_BankAddr(DDR_BankAddr);
  mp_impl->DDR_Addr(DDR_Addr);
  mp_impl->DDR_VRN(DDR_VRN);
  mp_impl->DDR_VRP(DDR_VRP);
  mp_impl->DDR_DM(DDR_DM);
  mp_impl->DDR_DQ(DDR_DQ);
  mp_impl->DDR_DQS_n(DDR_DQS_n);
  mp_impl->DDR_DQS(DDR_DQS);
  mp_impl->PS_SRSTB(PS_SRSTB);
  mp_impl->PS_CLK(PS_CLK);
  mp_impl->PS_PORB(PS_PORB);

  // initialize transactors
  mp_M_AXI_GP0_transactor = NULL;
  mp_M_AXI_GP0_ARLOCK_converter = NULL;
  mp_M_AXI_GP0_AWLOCK_converter = NULL;
  mp_M_AXI_GP0_ARLEN_converter = NULL;
  mp_M_AXI_GP0_AWLEN_converter = NULL;
  mp_S_AXI_ACP_transactor = NULL;
  mp_S_AXI_ACP_ARLEN_converter = NULL;
  mp_S_AXI_ACP_AWLEN_converter = NULL;
  mp_S_AXI_ACP_ARLOCK_converter = NULL;
  mp_S_AXI_ACP_AWLOCK_converter = NULL;

  // initialize socket stubs

}

void imageProcessingSystem_processing_system7_0_0::before_end_of_elaboration()
{
  // configure 'M_AXI_GP0' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "M_AXI_GP0_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M_AXI_GP0' transactor parameters
    xsc::common_cpp::properties M_AXI_GP0_transactor_param_props;
    M_AXI_GP0_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("DATA_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M_AXI_GP0_transactor_param_props.addLong("ID_WIDTH", "12");
    M_AXI_GP0_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BURST", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_LOCK", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_PROT", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_CACHE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_QOS", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_REGION", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_WSTRB", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_SIZE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RESET", "0");
    M_AXI_GP0_transactor_param_props.addFloat("PHASE", "0.0");
    M_AXI_GP0_transactor_param_props.addString("PROTOCOL", "AXI3");
    M_AXI_GP0_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M_AXI_GP0_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_M_AXI_GP0_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,12,1,1,1,1,1>("M_AXI_GP0_transactor", M_AXI_GP0_transactor_param_props);

    // M_AXI_GP0' transactor ports

    mp_M_AXI_GP0_transactor->ARVALID(M_AXI_GP0_ARVALID);
    mp_M_AXI_GP0_transactor->AWVALID(M_AXI_GP0_AWVALID);
    mp_M_AXI_GP0_transactor->BREADY(M_AXI_GP0_BREADY);
    mp_M_AXI_GP0_transactor->RREADY(M_AXI_GP0_RREADY);
    mp_M_AXI_GP0_transactor->WLAST(M_AXI_GP0_WLAST);
    mp_M_AXI_GP0_transactor->WVALID(M_AXI_GP0_WVALID);
    mp_M_AXI_GP0_transactor->ARID(M_AXI_GP0_ARID);
    mp_M_AXI_GP0_transactor->AWID(M_AXI_GP0_AWID);
    mp_M_AXI_GP0_transactor->ARBURST(M_AXI_GP0_ARBURST);
    mp_M_AXI_GP0_ARLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_ARLOCK_converter");
    mp_M_AXI_GP0_ARLOCK_converter->scalar_in(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_ARLOCK_converter->vector_out(M_AXI_GP0_ARLOCK);
    mp_M_AXI_GP0_transactor->ARLOCK(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->ARSIZE(M_AXI_GP0_ARSIZE);
    mp_M_AXI_GP0_transactor->AWBURST(M_AXI_GP0_AWBURST);
    mp_M_AXI_GP0_AWLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_AWLOCK_converter");
    mp_M_AXI_GP0_AWLOCK_converter->scalar_in(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_AWLOCK_converter->vector_out(M_AXI_GP0_AWLOCK);
    mp_M_AXI_GP0_transactor->AWLOCK(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->AWSIZE(M_AXI_GP0_AWSIZE);
    mp_M_AXI_GP0_transactor->ARPROT(M_AXI_GP0_ARPROT);
    mp_M_AXI_GP0_transactor->AWPROT(M_AXI_GP0_AWPROT);
    mp_M_AXI_GP0_transactor->ARADDR(M_AXI_GP0_ARADDR);
    mp_M_AXI_GP0_transactor->AWADDR(M_AXI_GP0_AWADDR);
    mp_M_AXI_GP0_transactor->WDATA(M_AXI_GP0_WDATA);
    mp_M_AXI_GP0_transactor->ARCACHE(M_AXI_GP0_ARCACHE);
    mp_M_AXI_GP0_ARLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_ARLEN_converter");
    mp_M_AXI_GP0_ARLEN_converter->vector_in(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_ARLEN_converter->vector_out(M_AXI_GP0_ARLEN);
    mp_M_AXI_GP0_transactor->ARLEN(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_transactor->ARQOS(M_AXI_GP0_ARQOS);
    mp_M_AXI_GP0_transactor->AWCACHE(M_AXI_GP0_AWCACHE);
    mp_M_AXI_GP0_AWLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_AWLEN_converter");
    mp_M_AXI_GP0_AWLEN_converter->vector_in(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_AWLEN_converter->vector_out(M_AXI_GP0_AWLEN);
    mp_M_AXI_GP0_transactor->AWLEN(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_transactor->AWQOS(M_AXI_GP0_AWQOS);
    mp_M_AXI_GP0_transactor->WSTRB(M_AXI_GP0_WSTRB);
    mp_M_AXI_GP0_transactor->ARREADY(M_AXI_GP0_ARREADY);
    mp_M_AXI_GP0_transactor->AWREADY(M_AXI_GP0_AWREADY);
    mp_M_AXI_GP0_transactor->BVALID(M_AXI_GP0_BVALID);
    mp_M_AXI_GP0_transactor->RLAST(M_AXI_GP0_RLAST);
    mp_M_AXI_GP0_transactor->RVALID(M_AXI_GP0_RVALID);
    mp_M_AXI_GP0_transactor->WREADY(M_AXI_GP0_WREADY);
    mp_M_AXI_GP0_transactor->BID(M_AXI_GP0_BID);
    mp_M_AXI_GP0_transactor->RID(M_AXI_GP0_RID);
    mp_M_AXI_GP0_transactor->BRESP(M_AXI_GP0_BRESP);
    mp_M_AXI_GP0_transactor->RRESP(M_AXI_GP0_RRESP);
    mp_M_AXI_GP0_transactor->RDATA(M_AXI_GP0_RDATA);
    mp_M_AXI_GP0_transactor->CLK(M_AXI_GP0_ACLK);
    m_M_AXI_GP0_transactor_rst_signal.write(1);
    mp_M_AXI_GP0_transactor->RST(m_M_AXI_GP0_transactor_rst_signal);

    // M_AXI_GP0' transactor sockets

    mp_impl->M_AXI_GP0_rd_socket->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_impl->M_AXI_GP0_wr_socket->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'S_AXI_ACP' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "S_AXI_ACP_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S_AXI_ACP' transactor parameters
    xsc::common_cpp::properties S_AXI_ACP_transactor_param_props;
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("DATA_WIDTH", "64");
    S_AXI_ACP_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S_AXI_ACP_transactor_param_props.addLong("ID_WIDTH", "3");
    S_AXI_ACP_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S_AXI_ACP_transactor_param_props.addLong("AWUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("ARUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BURST", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_LOCK", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_PROT", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_CACHE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_QOS", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_WSTRB", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_ACP_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_SIZE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RESET", "0");
    S_AXI_ACP_transactor_param_props.addFloat("PHASE", "0.0");
    S_AXI_ACP_transactor_param_props.addString("PROTOCOL", "AXI3");
    S_AXI_ACP_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_ACP_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_S_AXI_ACP_transactor = new xtlm::xaximm_pin2xtlm_t<64,32,3,5,1,1,5,1>("S_AXI_ACP_transactor", S_AXI_ACP_transactor_param_props);

    // S_AXI_ACP' transactor ports

    mp_S_AXI_ACP_transactor->ARREADY(S_AXI_ACP_ARREADY);
    mp_S_AXI_ACP_transactor->AWREADY(S_AXI_ACP_AWREADY);
    mp_S_AXI_ACP_transactor->BVALID(S_AXI_ACP_BVALID);
    mp_S_AXI_ACP_transactor->RLAST(S_AXI_ACP_RLAST);
    mp_S_AXI_ACP_transactor->RVALID(S_AXI_ACP_RVALID);
    mp_S_AXI_ACP_transactor->WREADY(S_AXI_ACP_WREADY);
    mp_S_AXI_ACP_transactor->BRESP(S_AXI_ACP_BRESP);
    mp_S_AXI_ACP_transactor->RRESP(S_AXI_ACP_RRESP);
    mp_S_AXI_ACP_transactor->BID(S_AXI_ACP_BID);
    mp_S_AXI_ACP_transactor->RID(S_AXI_ACP_RID);
    mp_S_AXI_ACP_transactor->RDATA(S_AXI_ACP_RDATA);
    mp_S_AXI_ACP_transactor->ARVALID(S_AXI_ACP_ARVALID);
    mp_S_AXI_ACP_transactor->AWVALID(S_AXI_ACP_AWVALID);
    mp_S_AXI_ACP_transactor->BREADY(S_AXI_ACP_BREADY);
    mp_S_AXI_ACP_transactor->RREADY(S_AXI_ACP_RREADY);
    mp_S_AXI_ACP_transactor->WLAST(S_AXI_ACP_WLAST);
    mp_S_AXI_ACP_transactor->WVALID(S_AXI_ACP_WVALID);
    mp_S_AXI_ACP_transactor->ARID(S_AXI_ACP_ARID);
    mp_S_AXI_ACP_transactor->ARPROT(S_AXI_ACP_ARPROT);
    mp_S_AXI_ACP_transactor->AWID(S_AXI_ACP_AWID);
    mp_S_AXI_ACP_transactor->AWPROT(S_AXI_ACP_AWPROT);
    mp_S_AXI_ACP_transactor->ARADDR(S_AXI_ACP_ARADDR);
    mp_S_AXI_ACP_transactor->AWADDR(S_AXI_ACP_AWADDR);
    mp_S_AXI_ACP_transactor->ARCACHE(S_AXI_ACP_ARCACHE);
    mp_S_AXI_ACP_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_ARLEN_converter");
    mp_S_AXI_ACP_ARLEN_converter->vector_in(S_AXI_ACP_ARLEN);
    mp_S_AXI_ACP_ARLEN_converter->vector_out(m_S_AXI_ACP_ARLEN_converter_signal);
    mp_S_AXI_ACP_transactor->ARLEN(m_S_AXI_ACP_ARLEN_converter_signal);
    mp_S_AXI_ACP_transactor->ARQOS(S_AXI_ACP_ARQOS);
    mp_S_AXI_ACP_transactor->AWCACHE(S_AXI_ACP_AWCACHE);
    mp_S_AXI_ACP_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_AWLEN_converter");
    mp_S_AXI_ACP_AWLEN_converter->vector_in(S_AXI_ACP_AWLEN);
    mp_S_AXI_ACP_AWLEN_converter->vector_out(m_S_AXI_ACP_AWLEN_converter_signal);
    mp_S_AXI_ACP_transactor->AWLEN(m_S_AXI_ACP_AWLEN_converter_signal);
    mp_S_AXI_ACP_transactor->AWQOS(S_AXI_ACP_AWQOS);
    mp_S_AXI_ACP_transactor->ARBURST(S_AXI_ACP_ARBURST);
    mp_S_AXI_ACP_ARLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_ARLOCK_converter");
    mp_S_AXI_ACP_ARLOCK_converter->vector_in(S_AXI_ACP_ARLOCK);
    mp_S_AXI_ACP_ARLOCK_converter->scalar_out(m_S_AXI_ACP_ARLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->ARLOCK(m_S_AXI_ACP_ARLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->ARSIZE(S_AXI_ACP_ARSIZE);
    mp_S_AXI_ACP_transactor->AWBURST(S_AXI_ACP_AWBURST);
    mp_S_AXI_ACP_AWLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_AWLOCK_converter");
    mp_S_AXI_ACP_AWLOCK_converter->vector_in(S_AXI_ACP_AWLOCK);
    mp_S_AXI_ACP_AWLOCK_converter->scalar_out(m_S_AXI_ACP_AWLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->AWLOCK(m_S_AXI_ACP_AWLOCK_converter_signal);
    mp_S_AXI_ACP_transactor->AWSIZE(S_AXI_ACP_AWSIZE);
    mp_S_AXI_ACP_transactor->ARUSER(S_AXI_ACP_ARUSER);
    mp_S_AXI_ACP_transactor->AWUSER(S_AXI_ACP_AWUSER);
    mp_S_AXI_ACP_transactor->WDATA(S_AXI_ACP_WDATA);
    mp_S_AXI_ACP_transactor->WSTRB(S_AXI_ACP_WSTRB);
    mp_S_AXI_ACP_transactor->CLK(S_AXI_ACP_ACLK);
    m_S_AXI_ACP_transactor_rst_signal.write(1);
    mp_S_AXI_ACP_transactor->RST(m_S_AXI_ACP_transactor_rst_signal);

    // S_AXI_ACP' transactor sockets

    mp_impl->S_AXI_ACP_rd_socket->bind(*(mp_S_AXI_ACP_transactor->rd_socket));
    mp_impl->S_AXI_ACP_wr_socket->bind(*(mp_S_AXI_ACP_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // RIVIERA




#ifdef VCSSYSTEMC
imageProcessingSystem_processing_system7_0_0::imageProcessingSystem_processing_system7_0_0(const sc_core::sc_module_name& nm) : imageProcessingSystem_processing_system7_0_0_sc(nm),  TTC0_WAVE0_OUT("TTC0_WAVE0_OUT"), TTC0_WAVE1_OUT("TTC0_WAVE1_OUT"), TTC0_WAVE2_OUT("TTC0_WAVE2_OUT"), USB0_PORT_INDCTL("USB0_PORT_INDCTL"), USB0_VBUS_PWRSELECT("USB0_VBUS_PWRSELECT"), USB0_VBUS_PWRFAULT("USB0_VBUS_PWRFAULT"), M_AXI_GP0_ARVALID("M_AXI_GP0_ARVALID"), M_AXI_GP0_AWVALID("M_AXI_GP0_AWVALID"), M_AXI_GP0_BREADY("M_AXI_GP0_BREADY"), M_AXI_GP0_RREADY("M_AXI_GP0_RREADY"), M_AXI_GP0_WLAST("M_AXI_GP0_WLAST"), M_AXI_GP0_WVALID("M_AXI_GP0_WVALID"), M_AXI_GP0_ARID("M_AXI_GP0_ARID"), M_AXI_GP0_AWID("M_AXI_GP0_AWID"), M_AXI_GP0_WID("M_AXI_GP0_WID"), M_AXI_GP0_ARBURST("M_AXI_GP0_ARBURST"), M_AXI_GP0_ARLOCK("M_AXI_GP0_ARLOCK"), M_AXI_GP0_ARSIZE("M_AXI_GP0_ARSIZE"), M_AXI_GP0_AWBURST("M_AXI_GP0_AWBURST"), M_AXI_GP0_AWLOCK("M_AXI_GP0_AWLOCK"), M_AXI_GP0_AWSIZE("M_AXI_GP0_AWSIZE"), M_AXI_GP0_ARPROT("M_AXI_GP0_ARPROT"), M_AXI_GP0_AWPROT("M_AXI_GP0_AWPROT"), M_AXI_GP0_ARADDR("M_AXI_GP0_ARADDR"), M_AXI_GP0_AWADDR("M_AXI_GP0_AWADDR"), M_AXI_GP0_WDATA("M_AXI_GP0_WDATA"), M_AXI_GP0_ARCACHE("M_AXI_GP0_ARCACHE"), M_AXI_GP0_ARLEN("M_AXI_GP0_ARLEN"), M_AXI_GP0_ARQOS("M_AXI_GP0_ARQOS"), M_AXI_GP0_AWCACHE("M_AXI_GP0_AWCACHE"), M_AXI_GP0_AWLEN("M_AXI_GP0_AWLEN"), M_AXI_GP0_AWQOS("M_AXI_GP0_AWQOS"), M_AXI_GP0_WSTRB("M_AXI_GP0_WSTRB"), M_AXI_GP0_ACLK("M_AXI_GP0_ACLK"), M_AXI_GP0_ARREADY("M_AXI_GP0_ARREADY"), M_AXI_GP0_AWREADY("M_AXI_GP0_AWREADY"), M_AXI_GP0_BVALID("M_AXI_GP0_BVALID"), M_AXI_GP0_RLAST("M_AXI_GP0_RLAST"), M_AXI_GP0_RVALID("M_AXI_GP0_RVALID"), M_AXI_GP0_WREADY("M_AXI_GP0_WREADY"), M_AXI_GP0_BID("M_AXI_GP0_BID"), M_AXI_GP0_RID("M_AXI_GP0_RID"), M_AXI_GP0_BRESP("M_AXI_GP0_BRESP"), M_AXI_GP0_RRESP("M_AXI_GP0_RRESP"), M_AXI_GP0_RDATA("M_AXI_GP0_RDATA"), S_AXI_ACP_ARREADY("S_AXI_ACP_ARREADY"), S_AXI_ACP_AWREADY("S_AXI_ACP_AWREADY"), S_AXI_ACP_BVALID("S_AXI_ACP_BVALID"), S_AXI_ACP_RLAST("S_AXI_ACP_RLAST"), S_AXI_ACP_RVALID("S_AXI_ACP_RVALID"), S_AXI_ACP_WREADY("S_AXI_ACP_WREADY"), S_AXI_ACP_BRESP("S_AXI_ACP_BRESP"), S_AXI_ACP_RRESP("S_AXI_ACP_RRESP"), S_AXI_ACP_BID("S_AXI_ACP_BID"), S_AXI_ACP_RID("S_AXI_ACP_RID"), S_AXI_ACP_RDATA("S_AXI_ACP_RDATA"), S_AXI_ACP_ACLK("S_AXI_ACP_ACLK"), S_AXI_ACP_ARVALID("S_AXI_ACP_ARVALID"), S_AXI_ACP_AWVALID("S_AXI_ACP_AWVALID"), S_AXI_ACP_BREADY("S_AXI_ACP_BREADY"), S_AXI_ACP_RREADY("S_AXI_ACP_RREADY"), S_AXI_ACP_WLAST("S_AXI_ACP_WLAST"), S_AXI_ACP_WVALID("S_AXI_ACP_WVALID"), S_AXI_ACP_ARID("S_AXI_ACP_ARID"), S_AXI_ACP_ARPROT("S_AXI_ACP_ARPROT"), S_AXI_ACP_AWID("S_AXI_ACP_AWID"), S_AXI_ACP_AWPROT("S_AXI_ACP_AWPROT"), S_AXI_ACP_WID("S_AXI_ACP_WID"), S_AXI_ACP_ARADDR("S_AXI_ACP_ARADDR"), S_AXI_ACP_AWADDR("S_AXI_ACP_AWADDR"), S_AXI_ACP_ARCACHE("S_AXI_ACP_ARCACHE"), S_AXI_ACP_ARLEN("S_AXI_ACP_ARLEN"), S_AXI_ACP_ARQOS("S_AXI_ACP_ARQOS"), S_AXI_ACP_AWCACHE("S_AXI_ACP_AWCACHE"), S_AXI_ACP_AWLEN("S_AXI_ACP_AWLEN"), S_AXI_ACP_AWQOS("S_AXI_ACP_AWQOS"), S_AXI_ACP_ARBURST("S_AXI_ACP_ARBURST"), S_AXI_ACP_ARLOCK("S_AXI_ACP_ARLOCK"), S_AXI_ACP_ARSIZE("S_AXI_ACP_ARSIZE"), S_AXI_ACP_AWBURST("S_AXI_ACP_AWBURST"), S_AXI_ACP_AWLOCK("S_AXI_ACP_AWLOCK"), S_AXI_ACP_AWSIZE("S_AXI_ACP_AWSIZE"), S_AXI_ACP_ARUSER("S_AXI_ACP_ARUSER"), S_AXI_ACP_AWUSER("S_AXI_ACP_AWUSER"), S_AXI_ACP_WDATA("S_AXI_ACP_WDATA"), S_AXI_ACP_WSTRB("S_AXI_ACP_WSTRB"), IRQ_F2P("IRQ_F2P"), FCLK_CLK0("FCLK_CLK0"), FCLK_RESET0_N("FCLK_RESET0_N"), MIO("MIO"), DDR_CAS_n("DDR_CAS_n"), DDR_CKE("DDR_CKE"), DDR_Clk_n("DDR_Clk_n"), DDR_Clk("DDR_Clk"), DDR_CS_n("DDR_CS_n"), DDR_DRSTB("DDR_DRSTB"), DDR_ODT("DDR_ODT"), DDR_RAS_n("DDR_RAS_n"), DDR_WEB("DDR_WEB"), DDR_BankAddr("DDR_BankAddr"), DDR_Addr("DDR_Addr"), DDR_VRN("DDR_VRN"), DDR_VRP("DDR_VRP"), DDR_DM("DDR_DM"), DDR_DQ("DDR_DQ"), DDR_DQS_n("DDR_DQS_n"), DDR_DQS("DDR_DQS"), PS_SRSTB("PS_SRSTB"), PS_CLK("PS_CLK"), PS_PORB("PS_PORB")
{
  // initialize pins
  mp_impl->TTC0_WAVE0_OUT(TTC0_WAVE0_OUT);
  mp_impl->TTC0_WAVE1_OUT(TTC0_WAVE1_OUT);
  mp_impl->TTC0_WAVE2_OUT(TTC0_WAVE2_OUT);
  mp_impl->USB0_PORT_INDCTL(USB0_PORT_INDCTL);
  mp_impl->USB0_VBUS_PWRSELECT(USB0_VBUS_PWRSELECT);
  mp_impl->USB0_VBUS_PWRFAULT(USB0_VBUS_PWRFAULT);
  mp_impl->M_AXI_GP0_ACLK(M_AXI_GP0_ACLK);
  mp_impl->S_AXI_ACP_ACLK(S_AXI_ACP_ACLK);
  mp_impl->IRQ_F2P(IRQ_F2P);
  mp_impl->FCLK_CLK0(FCLK_CLK0);
  mp_impl->FCLK_RESET0_N(FCLK_RESET0_N);
  mp_impl->MIO(MIO);
  mp_impl->DDR_CAS_n(DDR_CAS_n);
  mp_impl->DDR_CKE(DDR_CKE);
  mp_impl->DDR_Clk_n(DDR_Clk_n);
  mp_impl->DDR_Clk(DDR_Clk);
  mp_impl->DDR_CS_n(DDR_CS_n);
  mp_impl->DDR_DRSTB(DDR_DRSTB);
  mp_impl->DDR_ODT(DDR_ODT);
  mp_impl->DDR_RAS_n(DDR_RAS_n);
  mp_impl->DDR_WEB(DDR_WEB);
  mp_impl->DDR_BankAddr(DDR_BankAddr);
  mp_impl->DDR_Addr(DDR_Addr);
  mp_impl->DDR_VRN(DDR_VRN);
  mp_impl->DDR_VRP(DDR_VRP);
  mp_impl->DDR_DM(DDR_DM);
  mp_impl->DDR_DQ(DDR_DQ);
  mp_impl->DDR_DQS_n(DDR_DQS_n);
  mp_impl->DDR_DQS(DDR_DQS);
  mp_impl->PS_SRSTB(PS_SRSTB);
  mp_impl->PS_CLK(PS_CLK);
  mp_impl->PS_PORB(PS_PORB);

  // initialize transactors
  mp_M_AXI_GP0_transactor = NULL;
  mp_M_AXI_GP0_ARLOCK_converter = NULL;
  mp_M_AXI_GP0_AWLOCK_converter = NULL;
  mp_M_AXI_GP0_ARLEN_converter = NULL;
  mp_M_AXI_GP0_AWLEN_converter = NULL;
  mp_S_AXI_ACP_transactor = NULL;
  mp_S_AXI_ACP_ARLEN_converter = NULL;
  mp_S_AXI_ACP_AWLEN_converter = NULL;
  mp_S_AXI_ACP_ARLOCK_converter = NULL;
  mp_S_AXI_ACP_AWLOCK_converter = NULL;

  // Instantiate Socket Stubs

  // configure M_AXI_GP0_transactor
    xsc::common_cpp::properties M_AXI_GP0_transactor_param_props;
    M_AXI_GP0_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("DATA_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M_AXI_GP0_transactor_param_props.addLong("ID_WIDTH", "12");
    M_AXI_GP0_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BURST", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_LOCK", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_PROT", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_CACHE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_QOS", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_REGION", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_WSTRB", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_SIZE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RESET", "0");
    M_AXI_GP0_transactor_param_props.addFloat("PHASE", "0.0");
    M_AXI_GP0_transactor_param_props.addString("PROTOCOL", "AXI3");
    M_AXI_GP0_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M_AXI_GP0_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_M_AXI_GP0_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,12,1,1,1,1,1>("M_AXI_GP0_transactor", M_AXI_GP0_transactor_param_props);
  mp_M_AXI_GP0_transactor->ARVALID(M_AXI_GP0_ARVALID);
  mp_M_AXI_GP0_transactor->AWVALID(M_AXI_GP0_AWVALID);
  mp_M_AXI_GP0_transactor->BREADY(M_AXI_GP0_BREADY);
  mp_M_AXI_GP0_transactor->RREADY(M_AXI_GP0_RREADY);
  mp_M_AXI_GP0_transactor->WLAST(M_AXI_GP0_WLAST);
  mp_M_AXI_GP0_transactor->WVALID(M_AXI_GP0_WVALID);
  mp_M_AXI_GP0_transactor->ARID(M_AXI_GP0_ARID);
  mp_M_AXI_GP0_transactor->AWID(M_AXI_GP0_AWID);
  mp_M_AXI_GP0_transactor->ARBURST(M_AXI_GP0_ARBURST);
  mp_M_AXI_GP0_ARLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_ARLOCK_converter");
  mp_M_AXI_GP0_ARLOCK_converter->scalar_in(m_M_AXI_GP0_ARLOCK_converter_signal);
  mp_M_AXI_GP0_ARLOCK_converter->vector_out(M_AXI_GP0_ARLOCK);
  mp_M_AXI_GP0_transactor->ARLOCK(m_M_AXI_GP0_ARLOCK_converter_signal);
  mp_M_AXI_GP0_transactor->ARSIZE(M_AXI_GP0_ARSIZE);
  mp_M_AXI_GP0_transactor->AWBURST(M_AXI_GP0_AWBURST);
  mp_M_AXI_GP0_AWLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_AWLOCK_converter");
  mp_M_AXI_GP0_AWLOCK_converter->scalar_in(m_M_AXI_GP0_AWLOCK_converter_signal);
  mp_M_AXI_GP0_AWLOCK_converter->vector_out(M_AXI_GP0_AWLOCK);
  mp_M_AXI_GP0_transactor->AWLOCK(m_M_AXI_GP0_AWLOCK_converter_signal);
  mp_M_AXI_GP0_transactor->AWSIZE(M_AXI_GP0_AWSIZE);
  mp_M_AXI_GP0_transactor->ARPROT(M_AXI_GP0_ARPROT);
  mp_M_AXI_GP0_transactor->AWPROT(M_AXI_GP0_AWPROT);
  mp_M_AXI_GP0_transactor->ARADDR(M_AXI_GP0_ARADDR);
  mp_M_AXI_GP0_transactor->AWADDR(M_AXI_GP0_AWADDR);
  mp_M_AXI_GP0_transactor->WDATA(M_AXI_GP0_WDATA);
  mp_M_AXI_GP0_transactor->ARCACHE(M_AXI_GP0_ARCACHE);
  mp_M_AXI_GP0_ARLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_ARLEN_converter");
  mp_M_AXI_GP0_ARLEN_converter->vector_in(m_M_AXI_GP0_ARLEN_converter_signal);
  mp_M_AXI_GP0_ARLEN_converter->vector_out(M_AXI_GP0_ARLEN);
  mp_M_AXI_GP0_transactor->ARLEN(m_M_AXI_GP0_ARLEN_converter_signal);
  mp_M_AXI_GP0_transactor->ARQOS(M_AXI_GP0_ARQOS);
  mp_M_AXI_GP0_transactor->AWCACHE(M_AXI_GP0_AWCACHE);
  mp_M_AXI_GP0_AWLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_AWLEN_converter");
  mp_M_AXI_GP0_AWLEN_converter->vector_in(m_M_AXI_GP0_AWLEN_converter_signal);
  mp_M_AXI_GP0_AWLEN_converter->vector_out(M_AXI_GP0_AWLEN);
  mp_M_AXI_GP0_transactor->AWLEN(m_M_AXI_GP0_AWLEN_converter_signal);
  mp_M_AXI_GP0_transactor->AWQOS(M_AXI_GP0_AWQOS);
  mp_M_AXI_GP0_transactor->WSTRB(M_AXI_GP0_WSTRB);
  mp_M_AXI_GP0_transactor->ARREADY(M_AXI_GP0_ARREADY);
  mp_M_AXI_GP0_transactor->AWREADY(M_AXI_GP0_AWREADY);
  mp_M_AXI_GP0_transactor->BVALID(M_AXI_GP0_BVALID);
  mp_M_AXI_GP0_transactor->RLAST(M_AXI_GP0_RLAST);
  mp_M_AXI_GP0_transactor->RVALID(M_AXI_GP0_RVALID);
  mp_M_AXI_GP0_transactor->WREADY(M_AXI_GP0_WREADY);
  mp_M_AXI_GP0_transactor->BID(M_AXI_GP0_BID);
  mp_M_AXI_GP0_transactor->RID(M_AXI_GP0_RID);
  mp_M_AXI_GP0_transactor->BRESP(M_AXI_GP0_BRESP);
  mp_M_AXI_GP0_transactor->RRESP(M_AXI_GP0_RRESP);
  mp_M_AXI_GP0_transactor->RDATA(M_AXI_GP0_RDATA);
  mp_M_AXI_GP0_transactor->CLK(M_AXI_GP0_ACLK);
  m_M_AXI_GP0_transactor_rst_signal.write(1);
  mp_M_AXI_GP0_transactor->RST(m_M_AXI_GP0_transactor_rst_signal);
  // configure S_AXI_ACP_transactor
    xsc::common_cpp::properties S_AXI_ACP_transactor_param_props;
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("DATA_WIDTH", "64");
    S_AXI_ACP_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S_AXI_ACP_transactor_param_props.addLong("ID_WIDTH", "3");
    S_AXI_ACP_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S_AXI_ACP_transactor_param_props.addLong("AWUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("ARUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BURST", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_LOCK", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_PROT", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_CACHE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_QOS", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_WSTRB", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_ACP_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_SIZE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RESET", "0");
    S_AXI_ACP_transactor_param_props.addFloat("PHASE", "0.0");
    S_AXI_ACP_transactor_param_props.addString("PROTOCOL", "AXI3");
    S_AXI_ACP_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_ACP_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_S_AXI_ACP_transactor = new xtlm::xaximm_pin2xtlm_t<64,32,3,5,1,1,5,1>("S_AXI_ACP_transactor", S_AXI_ACP_transactor_param_props);
  mp_S_AXI_ACP_transactor->ARREADY(S_AXI_ACP_ARREADY);
  mp_S_AXI_ACP_transactor->AWREADY(S_AXI_ACP_AWREADY);
  mp_S_AXI_ACP_transactor->BVALID(S_AXI_ACP_BVALID);
  mp_S_AXI_ACP_transactor->RLAST(S_AXI_ACP_RLAST);
  mp_S_AXI_ACP_transactor->RVALID(S_AXI_ACP_RVALID);
  mp_S_AXI_ACP_transactor->WREADY(S_AXI_ACP_WREADY);
  mp_S_AXI_ACP_transactor->BRESP(S_AXI_ACP_BRESP);
  mp_S_AXI_ACP_transactor->RRESP(S_AXI_ACP_RRESP);
  mp_S_AXI_ACP_transactor->BID(S_AXI_ACP_BID);
  mp_S_AXI_ACP_transactor->RID(S_AXI_ACP_RID);
  mp_S_AXI_ACP_transactor->RDATA(S_AXI_ACP_RDATA);
  mp_S_AXI_ACP_transactor->ARVALID(S_AXI_ACP_ARVALID);
  mp_S_AXI_ACP_transactor->AWVALID(S_AXI_ACP_AWVALID);
  mp_S_AXI_ACP_transactor->BREADY(S_AXI_ACP_BREADY);
  mp_S_AXI_ACP_transactor->RREADY(S_AXI_ACP_RREADY);
  mp_S_AXI_ACP_transactor->WLAST(S_AXI_ACP_WLAST);
  mp_S_AXI_ACP_transactor->WVALID(S_AXI_ACP_WVALID);
  mp_S_AXI_ACP_transactor->ARID(S_AXI_ACP_ARID);
  mp_S_AXI_ACP_transactor->ARPROT(S_AXI_ACP_ARPROT);
  mp_S_AXI_ACP_transactor->AWID(S_AXI_ACP_AWID);
  mp_S_AXI_ACP_transactor->AWPROT(S_AXI_ACP_AWPROT);
  mp_S_AXI_ACP_transactor->ARADDR(S_AXI_ACP_ARADDR);
  mp_S_AXI_ACP_transactor->AWADDR(S_AXI_ACP_AWADDR);
  mp_S_AXI_ACP_transactor->ARCACHE(S_AXI_ACP_ARCACHE);
  mp_S_AXI_ACP_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_ARLEN_converter");
  mp_S_AXI_ACP_ARLEN_converter->vector_in(S_AXI_ACP_ARLEN);
  mp_S_AXI_ACP_ARLEN_converter->vector_out(m_S_AXI_ACP_ARLEN_converter_signal);
  mp_S_AXI_ACP_transactor->ARLEN(m_S_AXI_ACP_ARLEN_converter_signal);
  mp_S_AXI_ACP_transactor->ARQOS(S_AXI_ACP_ARQOS);
  mp_S_AXI_ACP_transactor->AWCACHE(S_AXI_ACP_AWCACHE);
  mp_S_AXI_ACP_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_AWLEN_converter");
  mp_S_AXI_ACP_AWLEN_converter->vector_in(S_AXI_ACP_AWLEN);
  mp_S_AXI_ACP_AWLEN_converter->vector_out(m_S_AXI_ACP_AWLEN_converter_signal);
  mp_S_AXI_ACP_transactor->AWLEN(m_S_AXI_ACP_AWLEN_converter_signal);
  mp_S_AXI_ACP_transactor->AWQOS(S_AXI_ACP_AWQOS);
  mp_S_AXI_ACP_transactor->ARBURST(S_AXI_ACP_ARBURST);
  mp_S_AXI_ACP_ARLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_ARLOCK_converter");
  mp_S_AXI_ACP_ARLOCK_converter->vector_in(S_AXI_ACP_ARLOCK);
  mp_S_AXI_ACP_ARLOCK_converter->scalar_out(m_S_AXI_ACP_ARLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->ARLOCK(m_S_AXI_ACP_ARLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->ARSIZE(S_AXI_ACP_ARSIZE);
  mp_S_AXI_ACP_transactor->AWBURST(S_AXI_ACP_AWBURST);
  mp_S_AXI_ACP_AWLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_AWLOCK_converter");
  mp_S_AXI_ACP_AWLOCK_converter->vector_in(S_AXI_ACP_AWLOCK);
  mp_S_AXI_ACP_AWLOCK_converter->scalar_out(m_S_AXI_ACP_AWLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->AWLOCK(m_S_AXI_ACP_AWLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->AWSIZE(S_AXI_ACP_AWSIZE);
  mp_S_AXI_ACP_transactor->ARUSER(S_AXI_ACP_ARUSER);
  mp_S_AXI_ACP_transactor->AWUSER(S_AXI_ACP_AWUSER);
  mp_S_AXI_ACP_transactor->WDATA(S_AXI_ACP_WDATA);
  mp_S_AXI_ACP_transactor->WSTRB(S_AXI_ACP_WSTRB);
  mp_S_AXI_ACP_transactor->CLK(S_AXI_ACP_ACLK);
  m_S_AXI_ACP_transactor_rst_signal.write(1);
  mp_S_AXI_ACP_transactor->RST(m_S_AXI_ACP_transactor_rst_signal);

  // initialize transactors stubs
  M_AXI_GP0_transactor_initiator_wr_socket_stub = nullptr;
  M_AXI_GP0_transactor_initiator_rd_socket_stub = nullptr;
  S_AXI_ACP_transactor_target_wr_socket_stub = nullptr;
  S_AXI_ACP_transactor_target_rd_socket_stub = nullptr;

}

void imageProcessingSystem_processing_system7_0_0::before_end_of_elaboration()
{
  // configure 'M_AXI_GP0' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "M_AXI_GP0_TLM_MODE") != 1)
  {
    mp_impl->M_AXI_GP0_rd_socket->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_impl->M_AXI_GP0_wr_socket->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
  
  }
  else
  {
    M_AXI_GP0_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M_AXI_GP0_transactor_initiator_wr_socket_stub->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
    M_AXI_GP0_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M_AXI_GP0_transactor_initiator_rd_socket_stub->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_M_AXI_GP0_transactor->disable_transactor();
  }

  // configure 'S_AXI_ACP' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "S_AXI_ACP_TLM_MODE") != 1)
  {
    mp_impl->S_AXI_ACP_rd_socket->bind(*(mp_S_AXI_ACP_transactor->rd_socket));
    mp_impl->S_AXI_ACP_wr_socket->bind(*(mp_S_AXI_ACP_transactor->wr_socket));
  
  }
  else
  {
    S_AXI_ACP_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S_AXI_ACP_transactor_target_wr_socket_stub->bind(*(mp_S_AXI_ACP_transactor->wr_socket));
    S_AXI_ACP_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S_AXI_ACP_transactor_target_rd_socket_stub->bind(*(mp_S_AXI_ACP_transactor->rd_socket));
    mp_S_AXI_ACP_transactor->disable_transactor();
  }

}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
imageProcessingSystem_processing_system7_0_0::imageProcessingSystem_processing_system7_0_0(const sc_core::sc_module_name& nm) : imageProcessingSystem_processing_system7_0_0_sc(nm),  TTC0_WAVE0_OUT("TTC0_WAVE0_OUT"), TTC0_WAVE1_OUT("TTC0_WAVE1_OUT"), TTC0_WAVE2_OUT("TTC0_WAVE2_OUT"), USB0_PORT_INDCTL("USB0_PORT_INDCTL"), USB0_VBUS_PWRSELECT("USB0_VBUS_PWRSELECT"), USB0_VBUS_PWRFAULT("USB0_VBUS_PWRFAULT"), M_AXI_GP0_ARVALID("M_AXI_GP0_ARVALID"), M_AXI_GP0_AWVALID("M_AXI_GP0_AWVALID"), M_AXI_GP0_BREADY("M_AXI_GP0_BREADY"), M_AXI_GP0_RREADY("M_AXI_GP0_RREADY"), M_AXI_GP0_WLAST("M_AXI_GP0_WLAST"), M_AXI_GP0_WVALID("M_AXI_GP0_WVALID"), M_AXI_GP0_ARID("M_AXI_GP0_ARID"), M_AXI_GP0_AWID("M_AXI_GP0_AWID"), M_AXI_GP0_WID("M_AXI_GP0_WID"), M_AXI_GP0_ARBURST("M_AXI_GP0_ARBURST"), M_AXI_GP0_ARLOCK("M_AXI_GP0_ARLOCK"), M_AXI_GP0_ARSIZE("M_AXI_GP0_ARSIZE"), M_AXI_GP0_AWBURST("M_AXI_GP0_AWBURST"), M_AXI_GP0_AWLOCK("M_AXI_GP0_AWLOCK"), M_AXI_GP0_AWSIZE("M_AXI_GP0_AWSIZE"), M_AXI_GP0_ARPROT("M_AXI_GP0_ARPROT"), M_AXI_GP0_AWPROT("M_AXI_GP0_AWPROT"), M_AXI_GP0_ARADDR("M_AXI_GP0_ARADDR"), M_AXI_GP0_AWADDR("M_AXI_GP0_AWADDR"), M_AXI_GP0_WDATA("M_AXI_GP0_WDATA"), M_AXI_GP0_ARCACHE("M_AXI_GP0_ARCACHE"), M_AXI_GP0_ARLEN("M_AXI_GP0_ARLEN"), M_AXI_GP0_ARQOS("M_AXI_GP0_ARQOS"), M_AXI_GP0_AWCACHE("M_AXI_GP0_AWCACHE"), M_AXI_GP0_AWLEN("M_AXI_GP0_AWLEN"), M_AXI_GP0_AWQOS("M_AXI_GP0_AWQOS"), M_AXI_GP0_WSTRB("M_AXI_GP0_WSTRB"), M_AXI_GP0_ACLK("M_AXI_GP0_ACLK"), M_AXI_GP0_ARREADY("M_AXI_GP0_ARREADY"), M_AXI_GP0_AWREADY("M_AXI_GP0_AWREADY"), M_AXI_GP0_BVALID("M_AXI_GP0_BVALID"), M_AXI_GP0_RLAST("M_AXI_GP0_RLAST"), M_AXI_GP0_RVALID("M_AXI_GP0_RVALID"), M_AXI_GP0_WREADY("M_AXI_GP0_WREADY"), M_AXI_GP0_BID("M_AXI_GP0_BID"), M_AXI_GP0_RID("M_AXI_GP0_RID"), M_AXI_GP0_BRESP("M_AXI_GP0_BRESP"), M_AXI_GP0_RRESP("M_AXI_GP0_RRESP"), M_AXI_GP0_RDATA("M_AXI_GP0_RDATA"), S_AXI_ACP_ARREADY("S_AXI_ACP_ARREADY"), S_AXI_ACP_AWREADY("S_AXI_ACP_AWREADY"), S_AXI_ACP_BVALID("S_AXI_ACP_BVALID"), S_AXI_ACP_RLAST("S_AXI_ACP_RLAST"), S_AXI_ACP_RVALID("S_AXI_ACP_RVALID"), S_AXI_ACP_WREADY("S_AXI_ACP_WREADY"), S_AXI_ACP_BRESP("S_AXI_ACP_BRESP"), S_AXI_ACP_RRESP("S_AXI_ACP_RRESP"), S_AXI_ACP_BID("S_AXI_ACP_BID"), S_AXI_ACP_RID("S_AXI_ACP_RID"), S_AXI_ACP_RDATA("S_AXI_ACP_RDATA"), S_AXI_ACP_ACLK("S_AXI_ACP_ACLK"), S_AXI_ACP_ARVALID("S_AXI_ACP_ARVALID"), S_AXI_ACP_AWVALID("S_AXI_ACP_AWVALID"), S_AXI_ACP_BREADY("S_AXI_ACP_BREADY"), S_AXI_ACP_RREADY("S_AXI_ACP_RREADY"), S_AXI_ACP_WLAST("S_AXI_ACP_WLAST"), S_AXI_ACP_WVALID("S_AXI_ACP_WVALID"), S_AXI_ACP_ARID("S_AXI_ACP_ARID"), S_AXI_ACP_ARPROT("S_AXI_ACP_ARPROT"), S_AXI_ACP_AWID("S_AXI_ACP_AWID"), S_AXI_ACP_AWPROT("S_AXI_ACP_AWPROT"), S_AXI_ACP_WID("S_AXI_ACP_WID"), S_AXI_ACP_ARADDR("S_AXI_ACP_ARADDR"), S_AXI_ACP_AWADDR("S_AXI_ACP_AWADDR"), S_AXI_ACP_ARCACHE("S_AXI_ACP_ARCACHE"), S_AXI_ACP_ARLEN("S_AXI_ACP_ARLEN"), S_AXI_ACP_ARQOS("S_AXI_ACP_ARQOS"), S_AXI_ACP_AWCACHE("S_AXI_ACP_AWCACHE"), S_AXI_ACP_AWLEN("S_AXI_ACP_AWLEN"), S_AXI_ACP_AWQOS("S_AXI_ACP_AWQOS"), S_AXI_ACP_ARBURST("S_AXI_ACP_ARBURST"), S_AXI_ACP_ARLOCK("S_AXI_ACP_ARLOCK"), S_AXI_ACP_ARSIZE("S_AXI_ACP_ARSIZE"), S_AXI_ACP_AWBURST("S_AXI_ACP_AWBURST"), S_AXI_ACP_AWLOCK("S_AXI_ACP_AWLOCK"), S_AXI_ACP_AWSIZE("S_AXI_ACP_AWSIZE"), S_AXI_ACP_ARUSER("S_AXI_ACP_ARUSER"), S_AXI_ACP_AWUSER("S_AXI_ACP_AWUSER"), S_AXI_ACP_WDATA("S_AXI_ACP_WDATA"), S_AXI_ACP_WSTRB("S_AXI_ACP_WSTRB"), IRQ_F2P("IRQ_F2P"), FCLK_CLK0("FCLK_CLK0"), FCLK_RESET0_N("FCLK_RESET0_N"), MIO("MIO"), DDR_CAS_n("DDR_CAS_n"), DDR_CKE("DDR_CKE"), DDR_Clk_n("DDR_Clk_n"), DDR_Clk("DDR_Clk"), DDR_CS_n("DDR_CS_n"), DDR_DRSTB("DDR_DRSTB"), DDR_ODT("DDR_ODT"), DDR_RAS_n("DDR_RAS_n"), DDR_WEB("DDR_WEB"), DDR_BankAddr("DDR_BankAddr"), DDR_Addr("DDR_Addr"), DDR_VRN("DDR_VRN"), DDR_VRP("DDR_VRP"), DDR_DM("DDR_DM"), DDR_DQ("DDR_DQ"), DDR_DQS_n("DDR_DQS_n"), DDR_DQS("DDR_DQS"), PS_SRSTB("PS_SRSTB"), PS_CLK("PS_CLK"), PS_PORB("PS_PORB")
{
  // initialize pins
  mp_impl->TTC0_WAVE0_OUT(TTC0_WAVE0_OUT);
  mp_impl->TTC0_WAVE1_OUT(TTC0_WAVE1_OUT);
  mp_impl->TTC0_WAVE2_OUT(TTC0_WAVE2_OUT);
  mp_impl->USB0_PORT_INDCTL(USB0_PORT_INDCTL);
  mp_impl->USB0_VBUS_PWRSELECT(USB0_VBUS_PWRSELECT);
  mp_impl->USB0_VBUS_PWRFAULT(USB0_VBUS_PWRFAULT);
  mp_impl->M_AXI_GP0_ACLK(M_AXI_GP0_ACLK);
  mp_impl->S_AXI_ACP_ACLK(S_AXI_ACP_ACLK);
  mp_impl->IRQ_F2P(IRQ_F2P);
  mp_impl->FCLK_CLK0(FCLK_CLK0);
  mp_impl->FCLK_RESET0_N(FCLK_RESET0_N);
  mp_impl->MIO(MIO);
  mp_impl->DDR_CAS_n(DDR_CAS_n);
  mp_impl->DDR_CKE(DDR_CKE);
  mp_impl->DDR_Clk_n(DDR_Clk_n);
  mp_impl->DDR_Clk(DDR_Clk);
  mp_impl->DDR_CS_n(DDR_CS_n);
  mp_impl->DDR_DRSTB(DDR_DRSTB);
  mp_impl->DDR_ODT(DDR_ODT);
  mp_impl->DDR_RAS_n(DDR_RAS_n);
  mp_impl->DDR_WEB(DDR_WEB);
  mp_impl->DDR_BankAddr(DDR_BankAddr);
  mp_impl->DDR_Addr(DDR_Addr);
  mp_impl->DDR_VRN(DDR_VRN);
  mp_impl->DDR_VRP(DDR_VRP);
  mp_impl->DDR_DM(DDR_DM);
  mp_impl->DDR_DQ(DDR_DQ);
  mp_impl->DDR_DQS_n(DDR_DQS_n);
  mp_impl->DDR_DQS(DDR_DQS);
  mp_impl->PS_SRSTB(PS_SRSTB);
  mp_impl->PS_CLK(PS_CLK);
  mp_impl->PS_PORB(PS_PORB);

  // initialize transactors
  mp_M_AXI_GP0_transactor = NULL;
  mp_M_AXI_GP0_ARLOCK_converter = NULL;
  mp_M_AXI_GP0_AWLOCK_converter = NULL;
  mp_M_AXI_GP0_ARLEN_converter = NULL;
  mp_M_AXI_GP0_AWLEN_converter = NULL;
  mp_S_AXI_ACP_transactor = NULL;
  mp_S_AXI_ACP_ARLEN_converter = NULL;
  mp_S_AXI_ACP_AWLEN_converter = NULL;
  mp_S_AXI_ACP_ARLOCK_converter = NULL;
  mp_S_AXI_ACP_AWLOCK_converter = NULL;

  // Instantiate Socket Stubs

  // configure M_AXI_GP0_transactor
    xsc::common_cpp::properties M_AXI_GP0_transactor_param_props;
    M_AXI_GP0_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addLong("DATA_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M_AXI_GP0_transactor_param_props.addLong("ID_WIDTH", "12");
    M_AXI_GP0_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BURST", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_LOCK", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_PROT", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_CACHE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_QOS", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_REGION", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_WSTRB", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_SIZE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RESET", "0");
    M_AXI_GP0_transactor_param_props.addFloat("PHASE", "0.0");
    M_AXI_GP0_transactor_param_props.addString("PROTOCOL", "AXI3");
    M_AXI_GP0_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M_AXI_GP0_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_M_AXI_GP0_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,12,1,1,1,1,1>("M_AXI_GP0_transactor", M_AXI_GP0_transactor_param_props);
  mp_M_AXI_GP0_transactor->ARVALID(M_AXI_GP0_ARVALID);
  mp_M_AXI_GP0_transactor->AWVALID(M_AXI_GP0_AWVALID);
  mp_M_AXI_GP0_transactor->BREADY(M_AXI_GP0_BREADY);
  mp_M_AXI_GP0_transactor->RREADY(M_AXI_GP0_RREADY);
  mp_M_AXI_GP0_transactor->WLAST(M_AXI_GP0_WLAST);
  mp_M_AXI_GP0_transactor->WVALID(M_AXI_GP0_WVALID);
  mp_M_AXI_GP0_transactor->ARID(M_AXI_GP0_ARID);
  mp_M_AXI_GP0_transactor->AWID(M_AXI_GP0_AWID);
  mp_M_AXI_GP0_transactor->ARBURST(M_AXI_GP0_ARBURST);
  mp_M_AXI_GP0_ARLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_ARLOCK_converter");
  mp_M_AXI_GP0_ARLOCK_converter->scalar_in(m_M_AXI_GP0_ARLOCK_converter_signal);
  mp_M_AXI_GP0_ARLOCK_converter->vector_out(M_AXI_GP0_ARLOCK);
  mp_M_AXI_GP0_transactor->ARLOCK(m_M_AXI_GP0_ARLOCK_converter_signal);
  mp_M_AXI_GP0_transactor->ARSIZE(M_AXI_GP0_ARSIZE);
  mp_M_AXI_GP0_transactor->AWBURST(M_AXI_GP0_AWBURST);
  mp_M_AXI_GP0_AWLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_AWLOCK_converter");
  mp_M_AXI_GP0_AWLOCK_converter->scalar_in(m_M_AXI_GP0_AWLOCK_converter_signal);
  mp_M_AXI_GP0_AWLOCK_converter->vector_out(M_AXI_GP0_AWLOCK);
  mp_M_AXI_GP0_transactor->AWLOCK(m_M_AXI_GP0_AWLOCK_converter_signal);
  mp_M_AXI_GP0_transactor->AWSIZE(M_AXI_GP0_AWSIZE);
  mp_M_AXI_GP0_transactor->ARPROT(M_AXI_GP0_ARPROT);
  mp_M_AXI_GP0_transactor->AWPROT(M_AXI_GP0_AWPROT);
  mp_M_AXI_GP0_transactor->ARADDR(M_AXI_GP0_ARADDR);
  mp_M_AXI_GP0_transactor->AWADDR(M_AXI_GP0_AWADDR);
  mp_M_AXI_GP0_transactor->WDATA(M_AXI_GP0_WDATA);
  mp_M_AXI_GP0_transactor->ARCACHE(M_AXI_GP0_ARCACHE);
  mp_M_AXI_GP0_ARLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_ARLEN_converter");
  mp_M_AXI_GP0_ARLEN_converter->vector_in(m_M_AXI_GP0_ARLEN_converter_signal);
  mp_M_AXI_GP0_ARLEN_converter->vector_out(M_AXI_GP0_ARLEN);
  mp_M_AXI_GP0_transactor->ARLEN(m_M_AXI_GP0_ARLEN_converter_signal);
  mp_M_AXI_GP0_transactor->ARQOS(M_AXI_GP0_ARQOS);
  mp_M_AXI_GP0_transactor->AWCACHE(M_AXI_GP0_AWCACHE);
  mp_M_AXI_GP0_AWLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_AWLEN_converter");
  mp_M_AXI_GP0_AWLEN_converter->vector_in(m_M_AXI_GP0_AWLEN_converter_signal);
  mp_M_AXI_GP0_AWLEN_converter->vector_out(M_AXI_GP0_AWLEN);
  mp_M_AXI_GP0_transactor->AWLEN(m_M_AXI_GP0_AWLEN_converter_signal);
  mp_M_AXI_GP0_transactor->AWQOS(M_AXI_GP0_AWQOS);
  mp_M_AXI_GP0_transactor->WSTRB(M_AXI_GP0_WSTRB);
  mp_M_AXI_GP0_transactor->ARREADY(M_AXI_GP0_ARREADY);
  mp_M_AXI_GP0_transactor->AWREADY(M_AXI_GP0_AWREADY);
  mp_M_AXI_GP0_transactor->BVALID(M_AXI_GP0_BVALID);
  mp_M_AXI_GP0_transactor->RLAST(M_AXI_GP0_RLAST);
  mp_M_AXI_GP0_transactor->RVALID(M_AXI_GP0_RVALID);
  mp_M_AXI_GP0_transactor->WREADY(M_AXI_GP0_WREADY);
  mp_M_AXI_GP0_transactor->BID(M_AXI_GP0_BID);
  mp_M_AXI_GP0_transactor->RID(M_AXI_GP0_RID);
  mp_M_AXI_GP0_transactor->BRESP(M_AXI_GP0_BRESP);
  mp_M_AXI_GP0_transactor->RRESP(M_AXI_GP0_RRESP);
  mp_M_AXI_GP0_transactor->RDATA(M_AXI_GP0_RDATA);
  mp_M_AXI_GP0_transactor->CLK(M_AXI_GP0_ACLK);
  m_M_AXI_GP0_transactor_rst_signal.write(1);
  mp_M_AXI_GP0_transactor->RST(m_M_AXI_GP0_transactor_rst_signal);
  // configure S_AXI_ACP_transactor
    xsc::common_cpp::properties S_AXI_ACP_transactor_param_props;
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S_AXI_ACP_transactor_param_props.addLong("DATA_WIDTH", "64");
    S_AXI_ACP_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S_AXI_ACP_transactor_param_props.addLong("ID_WIDTH", "3");
    S_AXI_ACP_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S_AXI_ACP_transactor_param_props.addLong("AWUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("ARUSER_WIDTH", "5");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BURST", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_LOCK", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_PROT", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_CACHE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_QOS", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_WSTRB", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_ACP_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_ACP_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S_AXI_ACP_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_ACP_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_ACP_transactor_param_props.addLong("HAS_SIZE", "1");
    S_AXI_ACP_transactor_param_props.addLong("HAS_RESET", "0");
    S_AXI_ACP_transactor_param_props.addFloat("PHASE", "0.0");
    S_AXI_ACP_transactor_param_props.addString("PROTOCOL", "AXI3");
    S_AXI_ACP_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_ACP_transactor_param_props.addString("CLK_DOMAIN", "imageProcessingSystem_processing_system7_0_0_FCLK_CLK0");

    mp_S_AXI_ACP_transactor = new xtlm::xaximm_pin2xtlm_t<64,32,3,5,1,1,5,1>("S_AXI_ACP_transactor", S_AXI_ACP_transactor_param_props);
  mp_S_AXI_ACP_transactor->ARREADY(S_AXI_ACP_ARREADY);
  mp_S_AXI_ACP_transactor->AWREADY(S_AXI_ACP_AWREADY);
  mp_S_AXI_ACP_transactor->BVALID(S_AXI_ACP_BVALID);
  mp_S_AXI_ACP_transactor->RLAST(S_AXI_ACP_RLAST);
  mp_S_AXI_ACP_transactor->RVALID(S_AXI_ACP_RVALID);
  mp_S_AXI_ACP_transactor->WREADY(S_AXI_ACP_WREADY);
  mp_S_AXI_ACP_transactor->BRESP(S_AXI_ACP_BRESP);
  mp_S_AXI_ACP_transactor->RRESP(S_AXI_ACP_RRESP);
  mp_S_AXI_ACP_transactor->BID(S_AXI_ACP_BID);
  mp_S_AXI_ACP_transactor->RID(S_AXI_ACP_RID);
  mp_S_AXI_ACP_transactor->RDATA(S_AXI_ACP_RDATA);
  mp_S_AXI_ACP_transactor->ARVALID(S_AXI_ACP_ARVALID);
  mp_S_AXI_ACP_transactor->AWVALID(S_AXI_ACP_AWVALID);
  mp_S_AXI_ACP_transactor->BREADY(S_AXI_ACP_BREADY);
  mp_S_AXI_ACP_transactor->RREADY(S_AXI_ACP_RREADY);
  mp_S_AXI_ACP_transactor->WLAST(S_AXI_ACP_WLAST);
  mp_S_AXI_ACP_transactor->WVALID(S_AXI_ACP_WVALID);
  mp_S_AXI_ACP_transactor->ARID(S_AXI_ACP_ARID);
  mp_S_AXI_ACP_transactor->ARPROT(S_AXI_ACP_ARPROT);
  mp_S_AXI_ACP_transactor->AWID(S_AXI_ACP_AWID);
  mp_S_AXI_ACP_transactor->AWPROT(S_AXI_ACP_AWPROT);
  mp_S_AXI_ACP_transactor->ARADDR(S_AXI_ACP_ARADDR);
  mp_S_AXI_ACP_transactor->AWADDR(S_AXI_ACP_AWADDR);
  mp_S_AXI_ACP_transactor->ARCACHE(S_AXI_ACP_ARCACHE);
  mp_S_AXI_ACP_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_ARLEN_converter");
  mp_S_AXI_ACP_ARLEN_converter->vector_in(S_AXI_ACP_ARLEN);
  mp_S_AXI_ACP_ARLEN_converter->vector_out(m_S_AXI_ACP_ARLEN_converter_signal);
  mp_S_AXI_ACP_transactor->ARLEN(m_S_AXI_ACP_ARLEN_converter_signal);
  mp_S_AXI_ACP_transactor->ARQOS(S_AXI_ACP_ARQOS);
  mp_S_AXI_ACP_transactor->AWCACHE(S_AXI_ACP_AWCACHE);
  mp_S_AXI_ACP_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("S_AXI_ACP_AWLEN_converter");
  mp_S_AXI_ACP_AWLEN_converter->vector_in(S_AXI_ACP_AWLEN);
  mp_S_AXI_ACP_AWLEN_converter->vector_out(m_S_AXI_ACP_AWLEN_converter_signal);
  mp_S_AXI_ACP_transactor->AWLEN(m_S_AXI_ACP_AWLEN_converter_signal);
  mp_S_AXI_ACP_transactor->AWQOS(S_AXI_ACP_AWQOS);
  mp_S_AXI_ACP_transactor->ARBURST(S_AXI_ACP_ARBURST);
  mp_S_AXI_ACP_ARLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_ARLOCK_converter");
  mp_S_AXI_ACP_ARLOCK_converter->vector_in(S_AXI_ACP_ARLOCK);
  mp_S_AXI_ACP_ARLOCK_converter->scalar_out(m_S_AXI_ACP_ARLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->ARLOCK(m_S_AXI_ACP_ARLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->ARSIZE(S_AXI_ACP_ARSIZE);
  mp_S_AXI_ACP_transactor->AWBURST(S_AXI_ACP_AWBURST);
  mp_S_AXI_ACP_AWLOCK_converter = new xsc::common::vectorN2scalar_converter<2>("S_AXI_ACP_AWLOCK_converter");
  mp_S_AXI_ACP_AWLOCK_converter->vector_in(S_AXI_ACP_AWLOCK);
  mp_S_AXI_ACP_AWLOCK_converter->scalar_out(m_S_AXI_ACP_AWLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->AWLOCK(m_S_AXI_ACP_AWLOCK_converter_signal);
  mp_S_AXI_ACP_transactor->AWSIZE(S_AXI_ACP_AWSIZE);
  mp_S_AXI_ACP_transactor->ARUSER(S_AXI_ACP_ARUSER);
  mp_S_AXI_ACP_transactor->AWUSER(S_AXI_ACP_AWUSER);
  mp_S_AXI_ACP_transactor->WDATA(S_AXI_ACP_WDATA);
  mp_S_AXI_ACP_transactor->WSTRB(S_AXI_ACP_WSTRB);
  mp_S_AXI_ACP_transactor->CLK(S_AXI_ACP_ACLK);
  m_S_AXI_ACP_transactor_rst_signal.write(1);
  mp_S_AXI_ACP_transactor->RST(m_S_AXI_ACP_transactor_rst_signal);

  // initialize transactors stubs
  M_AXI_GP0_transactor_initiator_wr_socket_stub = nullptr;
  M_AXI_GP0_transactor_initiator_rd_socket_stub = nullptr;
  S_AXI_ACP_transactor_target_wr_socket_stub = nullptr;
  S_AXI_ACP_transactor_target_rd_socket_stub = nullptr;

}

void imageProcessingSystem_processing_system7_0_0::before_end_of_elaboration()
{
  // configure 'M_AXI_GP0' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "M_AXI_GP0_TLM_MODE") != 1)
  {
    mp_impl->M_AXI_GP0_rd_socket->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_impl->M_AXI_GP0_wr_socket->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
  
  }
  else
  {
    M_AXI_GP0_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M_AXI_GP0_transactor_initiator_wr_socket_stub->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
    M_AXI_GP0_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M_AXI_GP0_transactor_initiator_rd_socket_stub->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_M_AXI_GP0_transactor->disable_transactor();
  }

  // configure 'S_AXI_ACP' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("imageProcessingSystem_processing_system7_0_0", "S_AXI_ACP_TLM_MODE") != 1)
  {
    mp_impl->S_AXI_ACP_rd_socket->bind(*(mp_S_AXI_ACP_transactor->rd_socket));
    mp_impl->S_AXI_ACP_wr_socket->bind(*(mp_S_AXI_ACP_transactor->wr_socket));
  
  }
  else
  {
    S_AXI_ACP_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S_AXI_ACP_transactor_target_wr_socket_stub->bind(*(mp_S_AXI_ACP_transactor->wr_socket));
    S_AXI_ACP_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S_AXI_ACP_transactor_target_rd_socket_stub->bind(*(mp_S_AXI_ACP_transactor->rd_socket));
    mp_S_AXI_ACP_transactor->disable_transactor();
  }

}

#endif // MTI_SYSTEMC




imageProcessingSystem_processing_system7_0_0::~imageProcessingSystem_processing_system7_0_0()
{
  delete mp_M_AXI_GP0_transactor;
  delete mp_M_AXI_GP0_ARLOCK_converter;
  delete mp_M_AXI_GP0_AWLOCK_converter;
  delete mp_M_AXI_GP0_ARLEN_converter;
  delete mp_M_AXI_GP0_AWLEN_converter;

  delete mp_S_AXI_ACP_transactor;
  delete mp_S_AXI_ACP_ARLEN_converter;
  delete mp_S_AXI_ACP_AWLEN_converter;
  delete mp_S_AXI_ACP_ARLOCK_converter;
  delete mp_S_AXI_ACP_AWLOCK_converter;

}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(imageProcessingSystem_processing_system7_0_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(imageProcessingSystem_processing_system7_0_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(imageProcessingSystem_processing_system7_0_0);
SC_REGISTER_BV(64);
#endif

