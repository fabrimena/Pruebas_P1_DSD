// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vsim_sim) {
    VL_CELL(VexRiscv, Vsim_VexRiscv);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vsim_sim::__Vconfigure(Vsim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vsim_sim::~Vsim_sim() {
}

void Vsim_sim::_initial__TOP__sim__1(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__1\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*159:0*/ __Vtemp2[5];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    // Body
    vlSymsp->TOP__sim.__PVT__bus_errors_re = 0U;
    vlSymsp->TOP__sim.__PVT__scratch_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_en_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_load_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_reload_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_txempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_txfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_we = 0U;
    vlSymsp->TOP__sim.__PVT__self6 = 0U;
    vlSymsp->TOP__sim.__PVT__self7 = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxtx_we = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_clear = 0U;
    vlSymsp->TOP__sim.__PVT__timer_pending_r = 0U;
    vlSymsp->TOP__sim.__PVT__timer_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__soc_rst = 0U;
    vlSymsp->TOP__sim.__PVT__slaves = 0U;
    __Vtemp1[0U] = 0x696e6974U;
    __Vtemp1[1U] = 0x72616d2eU;
    __Vtemp1[2U] = 0x696d5f73U;
    __Vtemp1[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlSymsp->TOP__sim.__PVT__sram, 0
                 , ~0ULL);
    __Vtemp2[0U] = 0x696e6974U;
    __Vtemp2[1U] = 0x72616d2eU;
    __Vtemp2[2U] = 0x61696e5fU;
    __Vtemp2[3U] = 0x696d5f6dU;
    __Vtemp2[4U] = 0x73U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(5, __Vtemp2)
                 , vlSymsp->TOP__sim.__PVT__main_ram
                 , 0, ~0ULL);
    vlSymsp->TOP__sim.__PVT__interface0_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__reset_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_r = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_re = 0U;
    __Vtemp3[0U] = 0x696e6974U;
    __Vtemp3[1U] = 0x6d656d2eU;
    __Vtemp3[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 37, 0, VL_CVT_PACK_STR_NW(3, __Vtemp3)
                 , vlSymsp->TOP__sim.__PVT__mem, 0, ~0ULL);
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r = 0U;
    vlSymsp->TOP__sim.__PVT__interface0_ack = 0U;
    vlSymsp->TOP__sim.__PVT__interface1_re = 0U;
    vlSymsp->TOP__sim.__PVT__interface1_we = 0U;
    vlSymsp->TOP__sim.__PVT__self2 = 0U;
    vlSymsp->TOP__sim.__PVT__self5 = 0U;
    vlSymsp->TOP__sim.__PVT__state = 0U;
    __Vtemp4[0U] = 0x696e6974U;
    __Vtemp4[1U] = 0x726f6d2eU;
    __Vtemp4[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 5950, 0, VL_CVT_PACK_STR_NW(3, __Vtemp4)
                 , vlSymsp->TOP__sim.__PVT__rom, 0, ~0ULL);
    vlSymsp->TOP__sim.__PVT__bus_errors = 0U;
    vlSymsp->TOP__sim.__PVT__scratch_storage = 0x12345678U;
    vlSymsp->TOP__sim.__PVT__timer_update_value_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_value_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__error = 0U;
    vlSymsp->TOP__sim.__PVT__interrupt = 0U;
    vlSymsp->TOP__sim.__PVT__next_state = 0U;
    vlSymsp->TOP__sim.__PVT__sram0_we = 0U;
    vlSymsp->TOP__sim.__PVT__sram1_we = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxtx_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_status_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce = 0U;
    vlSymsp->TOP__sim.__PVT__self1 = 0U;
    vlSymsp->TOP__sim.__PVT__timer_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_zero_pending = 0U;
    vlSymsp->TOP__sim.__PVT__uart_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable = 0U;
    vlSymsp->TOP__sim.__PVT__reset_storage = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0 = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable = 0U;
    vlSymsp->TOP__sim.__PVT__shared_ack = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0 = 0U;
    vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__count = 0xf4240U;
    vlSymsp->TOP__sim.__PVT__interface1_adr = 0U;
    vlSymsp->TOP__sim.__PVT__self4 = 0U;
    vlSymsp->TOP__sim.__PVT__master = 0U;
    vlSymsp->TOP__sim.__PVT__self3 = 0U;
    vlSymsp->TOP__sim.__PVT__self0 = 0U;
    vlSymsp->TOP__sim.__PVT__grant = 0U;
    vlSymsp->TOP__sim.__PVT__timer_en_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_load_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_reload_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_update_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__shared_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__timer_zero_clear = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_clear = 0U;
    vlSymsp->TOP__sim.__PVT__timer_value = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re = 0U;
    vlSymsp->TOP__sim.__PVT__interface1_dat_w = 0U;
    vlSymsp->TOP__sim.__PVT__int_rst = 1U;
}

void Vsim_sim::_settle__TOP__sim__2(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__2\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__self7 = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1));
    vlSymsp->TOP__sim.__PVT__timer_zero_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__timer_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__timer_pending_r))) {
        vlSymsp->TOP__sim.__PVT__timer_zero_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__uart_tx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_r))) {
        vlSymsp->TOP__sim.__PVT__uart_tx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_re) 
         & ((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_r) 
            >> 1U))) {
        vlSymsp->TOP__sim.__PVT__uart_rx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                ? vlSymsp->TOP__sim.__PVT__mem[vlSymsp->TOP__sim.__PVT__mem_adr0]
                : 0U);
    }
    vlSymsp->TOP__sim.__PVT__interface0_ack = 0U;
    if (vlSymsp->TOP__sim.__PVT__state) {
        vlSymsp->TOP__sim.__PVT__interface0_ack = 1U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__soc_rst = 0U;
    if (vlSymsp->TOP__sim.__PVT__reset_re) {
        vlSymsp->TOP__sim.__PVT__soc_rst = (1U & (IData)(vlSymsp->TOP__sim.__PVT__reset_storage));
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__uart_status_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_status_status = (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__uart_status_status)) 
                                                   | (0x10U 
                                                      != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)));
    vlSymsp->TOP__sim.__PVT__uart_status_status = (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__uart_status_status)) 
                                                   | ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable) 
                                                      << 1U));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)) 
              | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 
        ((2U & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)) 
         | (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)));
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 
        ((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)) 
         | ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable) 
            << 1U));
    vlSymsp->TOP__sim.__PVT__done = (0U == vlSymsp->TOP__sim.__PVT__count);
    vlSymsp->TOP__sim.__PVT__error = 0U;
    if ((0U == vlSymsp->TOP__sim.__PVT__count)) {
        vlSymsp->TOP__sim.__PVT__error = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__grant) {
        vlSymsp->TOP__sim.__PVT__self1 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data;
        vlSymsp->TOP__sim.__PVT__self0 = (0x3fffffffU 
                                          & (((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                               ? ((0xffffffe0U 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                  | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBusWishbone_ADR) 
                                                     << 2U))
                                               : (0xfffffffcU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                             >> 2U));
        vlSymsp->TOP__sim.__PVT__self5 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                          & 1U);
        vlSymsp->TOP__sim.__PVT__self2 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                           ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                           : 0xfU);
        vlSymsp->TOP__sim.__PVT__self6 = ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                           ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)
                                               ? 7U
                                               : 2U)
                                           : 0U);
        vlSymsp->TOP__sim.__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid;
    } else {
        vlSymsp->TOP__sim.__PVT__self1 = 0U;
        vlSymsp->TOP__sim.__PVT__self0 = (0x3fffffffU 
                                          & ((0x3ffffff8U 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 2U)) 
                                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
        vlSymsp->TOP__sim.__PVT__self5 = 0U;
        vlSymsp->TOP__sim.__PVT__self2 = 0xfU;
        vlSymsp->TOP__sim.__PVT__self6 = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                           ? 7U : 2U);
        vlSymsp->TOP__sim.__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
    }
    vlSymsp->TOP__sim.__PVT__request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                         << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__sim.__PVT__self3 = ((IData)(vlSymsp->TOP__sim.__PVT__grant)
                                       ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid)
                                       : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)) 
              | (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_clear)));
    vlSymsp->TOP__sim.__PVT__interface0_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__state) {
        vlSymsp->TOP__sim.__PVT__interface0_dat_r = 
            (((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
               | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r) 
              | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r) 
             | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r);
    }
    vlSymsp->TOP__sim.__PVT__shared_ack = ((((IData)(vlSymsp->TOP__sim.__PVT__ram_bus_ack) 
                                             | (IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack)) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__interface0_ack));
    if ((0U == vlSymsp->TOP__sim.__PVT__count)) {
        vlSymsp->TOP__sim.__PVT__shared_ack = 1U;
    }
    vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset = 
        (1U & ((IData)(vlSymsp->TOP__sim.__PVT__int_rst) 
               | ((IData)(vlSymsp->TOP__sim.__PVT__soc_rst) 
                  | ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                     >> 1U))));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
    vlSymsp->TOP__sim.__PVT__interrupt = 0U;
    vlSymsp->TOP__sim.__PVT__interrupt = ((0xfffffffdU 
                                           & vlSymsp->TOP__sim.__PVT__interrupt) 
                                          | (((IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending) 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage)) 
                                             << 1U));
    vlSymsp->TOP__sim.__PVT__interrupt = ((0xfffffffeU 
                                           & vlSymsp->TOP__sim.__PVT__interrupt) 
                                          | (1U & (
                                                   ((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                                   | (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                                       & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                                      >> 1U))));
    vlSymsp->TOP__sim.__PVT__interface1_dat_w = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__state)))) {
        vlSymsp->TOP__sim.__PVT__interface1_dat_w = vlSymsp->TOP__sim.__PVT__self1;
    }
}

void Vsim_sim::_settle__TOP__sim__3(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__3\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__master = 0U;
    vlSymsp->TOP__sim.__PVT__master = ((0xeU & (IData)(vlSymsp->TOP__sim.__PVT__master)) 
                                       | (0U == (0x7fffU 
                                                 & (vlSymsp->TOP__sim.__PVT__self0 
                                                    >> 0xfU))));
    vlSymsp->TOP__sim.__PVT__master = ((0xdU & (IData)(vlSymsp->TOP__sim.__PVT__master)) 
                                       | ((0x8000U 
                                           == (0x7ffffU 
                                               & (vlSymsp->TOP__sim.__PVT__self0 
                                                  >> 0xbU))) 
                                          << 1U));
    vlSymsp->TOP__sim.__PVT__master = ((0xbU & (IData)(vlSymsp->TOP__sim.__PVT__master)) 
                                       | ((0x4000U 
                                           == (0xffffU 
                                               & (vlSymsp->TOP__sim.__PVT__self0 
                                                  >> 0xeU))) 
                                          << 2U));
    vlSymsp->TOP__sim.__PVT__master = ((7U & (IData)(vlSymsp->TOP__sim.__PVT__master)) 
                                       | ((0xf000U 
                                           == (0xffffU 
                                               & (vlSymsp->TOP__sim.__PVT__self0 
                                                  >> 0xeU))) 
                                          << 3U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re));
    vlSymsp->TOP__sim.__PVT__shared_dat_r = (((((- (IData)(
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__sim.__PVT__slaves)))) 
                                                & vlSymsp->TOP__sim.__PVT__rom_dat0) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__sim.__PVT__slaves) 
                                                                 >> 1U)))) 
                                                  & vlSymsp->TOP__sim.__PVT__sram
                                                  [vlSymsp->TOP__sim.__PVT__sram_adr0])) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__sim.__PVT__slaves) 
                                                                >> 2U)))) 
                                                 & vlSymsp->TOP__sim.__PVT__main_ram
                                                 [vlSymsp->TOP__sim.__PVT__main_ram_adr0])) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP__sim.__PVT__slaves) 
                                                               >> 3U)))) 
                                                & vlSymsp->TOP__sim.__PVT__interface0_dat_r));
    if ((0U == vlSymsp->TOP__sim.__PVT__count)) {
        vlSymsp->TOP__sim.__PVT__shared_dat_r = 0xffffffffU;
    }
    vlSymsp->TOP__sim.__PVT__ibus_ack = ((IData)(vlSymsp->TOP__sim.__PVT__shared_ack) 
                                         & (~ (IData)(vlSymsp->TOP__sim.__PVT__grant)));
    vlSymsp->TOP__sim.__PVT__dbus_ack = ((IData)(vlSymsp->TOP__sim.__PVT__shared_ack) 
                                         & (IData)(vlSymsp->TOP__sim.__PVT__grant));
    vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc 
        = ((IData)(vlSymsp->TOP__sim.__PVT__self3) 
           & ((IData)(vlSymsp->TOP__sim.__PVT__master) 
              >> 1U));
    vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc 
        = ((IData)(vlSymsp->TOP__sim.__PVT__self3) 
           & ((IData)(vlSymsp->TOP__sim.__PVT__master) 
              >> 2U));
    vlSymsp->TOP__sim.__PVT__interface0_cyc = ((IData)(vlSymsp->TOP__sim.__PVT__self3) 
                                               & ((IData)(vlSymsp->TOP__sim.__PVT__master) 
                                                  >> 3U));
    vlSymsp->TOP__sim.__PVT__sram0_we = 0U;
    vlSymsp->TOP__sim.__PVT__sram0_we = ((0xeU & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we)) 
                                         | ((((IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc) 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__self2)));
    vlSymsp->TOP__sim.__PVT__sram0_we = ((0xdU & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we)) 
                                         | (0xfffffffeU 
                                            & (((((IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                                << 1U) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__self2))));
    vlSymsp->TOP__sim.__PVT__sram0_we = ((0xbU & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we)) 
                                         | (0xfffffffcU 
                                            & (((((IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                                << 2U) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__self2))));
    vlSymsp->TOP__sim.__PVT__sram0_we = ((7U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we)) 
                                         | (0xfffffff8U 
                                            & (((((IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                                << 3U) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__self2))));
    vlSymsp->TOP__sim.__PVT__sram1_we = 0U;
    vlSymsp->TOP__sim.__PVT__sram1_we = ((0xeU & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we)) 
                                         | ((((IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc) 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__self2)));
    vlSymsp->TOP__sim.__PVT__sram1_we = ((0xdU & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we)) 
                                         | (0xfffffffeU 
                                            & (((((IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                                << 1U) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__self2))));
    vlSymsp->TOP__sim.__PVT__sram1_we = ((0xbU & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we)) 
                                         | (0xfffffffcU 
                                            & (((((IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                                << 2U) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__self2))));
    vlSymsp->TOP__sim.__PVT__sram1_we = ((7U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we)) 
                                         | (0xfffffff8U 
                                            & (((((IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                                                << 3U) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__self2))));
    vlSymsp->TOP__sim.__PVT__next_state = vlSymsp->TOP__sim.__PVT__state;
    if (vlSymsp->TOP__sim.__PVT__state) {
        vlSymsp->TOP__sim.__PVT__next_state = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__sim.__PVT__interface0_cyc) 
             & (IData)(vlSymsp->TOP__sim.__PVT__self4))) {
            vlSymsp->TOP__sim.__PVT__next_state = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__interface1_re = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__state)))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__interface0_cyc) 
             & (IData)(vlSymsp->TOP__sim.__PVT__self4))) {
            vlSymsp->TOP__sim.__PVT__interface1_re 
                = ((~ (IData)(vlSymsp->TOP__sim.__PVT__self5)) 
                   & (0U != (IData)(vlSymsp->TOP__sim.__PVT__self2)));
        }
    }
    vlSymsp->TOP__sim.__PVT__interface1_we = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__state)))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__interface0_cyc) 
             & (IData)(vlSymsp->TOP__sim.__PVT__self4))) {
            vlSymsp->TOP__sim.__PVT__interface1_we 
                = ((IData)(vlSymsp->TOP__sim.__PVT__self5) 
                   & (0U != (IData)(vlSymsp->TOP__sim.__PVT__self2)));
        }
    }
    vlSymsp->TOP__sim.__PVT__interface1_adr = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__state)))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__interface0_cyc) 
             & (IData)(vlSymsp->TOP__sim.__PVT__self4))) {
            vlSymsp->TOP__sim.__PVT__interface1_adr 
                = (0x3fffU & vlSymsp->TOP__sim.__PVT__self0);
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
}

void Vsim_sim::_settle__TOP__sim__4(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__4\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__uart_rxtx_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__uart_rxtx_we = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__uart_rxtx_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__uart_rxtx_re = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
}

void Vsim_sim::_settle__TOP__sim__5(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__5\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_re 
            = vlSymsp->TOP__sim.__PVT__interface1_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_we 
            = vlSymsp->TOP__sim.__PVT__interface1_re;
    }
}

void Vsim_sim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_ctor_var_reset\n"); );
    // Body
    serial_sink_data = VL_RAND_RESET_I(8);
    serial_sink_ready = VL_RAND_RESET_I(1);
    serial_sink_valid = VL_RAND_RESET_I(1);
    serial_source_data = VL_RAND_RESET_I(8);
    serial_source_ready = VL_RAND_RESET_I(1);
    serial_source_valid = VL_RAND_RESET_I(1);
    __PVT__sim_trace = VL_RAND_RESET_I(1);
    sys_clk = VL_RAND_RESET_I(1);
    __PVT__bus_errors = VL_RAND_RESET_I(32);
    __PVT__bus_errors_re = VL_RAND_RESET_I(1);
    __PVT__count = VL_RAND_RESET_I(20);
    __PVT__csr_bankarray_csrbank0_bus_errors_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank0_bus_errors_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank0_reset0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank0_reset0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank0_scratch0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank0_scratch0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_en0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_en0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_ev_enable0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_ev_enable0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_ev_pending_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_ev_pending_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_ev_status_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_ev_status_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_load0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_load0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_reload0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_reload0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_update_value0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_update_value0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_value_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank1_value_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_ev_enable0_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_ev_enable0_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_ev_pending_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_ev_pending_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_ev_status_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_ev_status_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_rxempty_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_rxempty_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_rxfull_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_rxfull_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_txempty_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_txempty_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_txfull_re = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_csrbank2_txfull_we = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_interface0_bank_bus_dat_r = VL_RAND_RESET_I(32);
    __PVT__csr_bankarray_interface1_bank_bus_dat_r = VL_RAND_RESET_I(32);
    __PVT__csr_bankarray_interface2_bank_bus_dat_r = VL_RAND_RESET_I(32);
    __PVT__csr_bankarray_sel_r = VL_RAND_RESET_I(1);
    __PVT__csr_bankarray_sram_bus_dat_r = VL_RAND_RESET_I(32);
    __PVT__dbus_ack = VL_RAND_RESET_I(1);
    __PVT__done = VL_RAND_RESET_I(1);
    __PVT__error = VL_RAND_RESET_I(1);
    __PVT__grant = VL_RAND_RESET_I(1);
    __PVT__ibus_ack = VL_RAND_RESET_I(1);
    __PVT__int_rst = VL_RAND_RESET_I(1);
    __PVT__interface0_ack = VL_RAND_RESET_I(1);
    __PVT__interface0_cyc = VL_RAND_RESET_I(1);
    __PVT__interface0_dat_r = VL_RAND_RESET_I(32);
    __PVT__interface0_ram_bus_ack = VL_RAND_RESET_I(1);
    __PVT__interface0_ram_bus_cyc = VL_RAND_RESET_I(1);
    __PVT__interface1_adr = VL_RAND_RESET_I(14);
    __PVT__interface1_dat_w = VL_RAND_RESET_I(32);
    __PVT__interface1_ram_bus_ack = VL_RAND_RESET_I(1);
    __PVT__interface1_ram_bus_cyc = VL_RAND_RESET_I(1);
    __PVT__interface1_re = VL_RAND_RESET_I(1);
    __PVT__interface1_we = VL_RAND_RESET_I(1);
    __PVT__interrupt = VL_RAND_RESET_I(32);
    __PVT__master = VL_RAND_RESET_I(4);
    __PVT__next_state = VL_RAND_RESET_I(1);
    __PVT__ram_bus_ack = VL_RAND_RESET_I(1);
    __PVT__request = VL_RAND_RESET_I(2);
    __PVT__reset_re = VL_RAND_RESET_I(1);
    __PVT__reset_storage = VL_RAND_RESET_I(2);
    __PVT__scratch_re = VL_RAND_RESET_I(1);
    __PVT__scratch_storage = VL_RAND_RESET_I(32);
    __PVT__self0 = VL_RAND_RESET_I(30);
    __PVT__self1 = VL_RAND_RESET_I(32);
    __PVT__self2 = VL_RAND_RESET_I(4);
    __PVT__self3 = VL_RAND_RESET_I(1);
    __PVT__self4 = VL_RAND_RESET_I(1);
    __PVT__self5 = VL_RAND_RESET_I(1);
    __PVT__self6 = VL_RAND_RESET_I(3);
    __PVT__self7 = VL_RAND_RESET_I(2);
    __PVT__shared_ack = VL_RAND_RESET_I(1);
    __PVT__shared_dat_r = VL_RAND_RESET_I(32);
    __PVT__slaves = VL_RAND_RESET_I(4);
    __PVT__soc_rst = VL_RAND_RESET_I(1);
    __PVT__sram0_we = VL_RAND_RESET_I(4);
    __PVT__sram1_we = VL_RAND_RESET_I(4);
    __PVT__state = VL_RAND_RESET_I(1);
    __PVT__timer_en_re = VL_RAND_RESET_I(1);
    __PVT__timer_en_storage = VL_RAND_RESET_I(1);
    __PVT__timer_enable_re = VL_RAND_RESET_I(1);
    __PVT__timer_enable_storage = VL_RAND_RESET_I(1);
    __PVT__timer_load_re = VL_RAND_RESET_I(1);
    __PVT__timer_load_storage = VL_RAND_RESET_I(32);
    __PVT__timer_pending_r = VL_RAND_RESET_I(1);
    __PVT__timer_pending_re = VL_RAND_RESET_I(1);
    __PVT__timer_reload_re = VL_RAND_RESET_I(1);
    __PVT__timer_reload_storage = VL_RAND_RESET_I(32);
    __PVT__timer_status_re = VL_RAND_RESET_I(1);
    __PVT__timer_update_value_re = VL_RAND_RESET_I(1);
    __PVT__timer_update_value_storage = VL_RAND_RESET_I(1);
    __PVT__timer_value = VL_RAND_RESET_I(32);
    __PVT__timer_value_re = VL_RAND_RESET_I(1);
    __PVT__timer_value_status = VL_RAND_RESET_I(32);
    __PVT__timer_zero_clear = VL_RAND_RESET_I(1);
    __PVT__timer_zero_pending = VL_RAND_RESET_I(1);
    __PVT__timer_zero_trigger_d = VL_RAND_RESET_I(1);
    __PVT__uart_enable_re = VL_RAND_RESET_I(1);
    __PVT__uart_enable_storage = VL_RAND_RESET_I(2);
    __PVT__uart_pending_r = VL_RAND_RESET_I(2);
    __PVT__uart_pending_re = VL_RAND_RESET_I(1);
    __PVT__uart_pending_status = VL_RAND_RESET_I(2);
    __PVT__uart_rx_clear = VL_RAND_RESET_I(1);
    __PVT__uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    __PVT__uart_rx_fifo_do_read = VL_RAND_RESET_I(1);
    __PVT__uart_rx_fifo_fifo_out_first = VL_RAND_RESET_I(1);
    __PVT__uart_rx_fifo_fifo_out_last = VL_RAND_RESET_I(1);
    __PVT__uart_rx_fifo_fifo_out_payload_data = VL_RAND_RESET_I(8);
    __PVT__uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    __PVT__uart_rx_fifo_produce = VL_RAND_RESET_I(4);
    __PVT__uart_rx_fifo_readable = VL_RAND_RESET_I(1);
    __PVT__uart_rx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    __PVT__uart_rx_fifo_syncfifo_writable = VL_RAND_RESET_I(1);
    __PVT__uart_rx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    __PVT__uart_rxempty_re = VL_RAND_RESET_I(1);
    __PVT__uart_rxfull_re = VL_RAND_RESET_I(1);
    __PVT__uart_rxtx_re = VL_RAND_RESET_I(1);
    __PVT__uart_rxtx_we = VL_RAND_RESET_I(1);
    __PVT__uart_status_re = VL_RAND_RESET_I(1);
    __PVT__uart_status_status = VL_RAND_RESET_I(2);
    __PVT__uart_tx_clear = VL_RAND_RESET_I(1);
    __PVT__uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    __PVT__uart_tx_fifo_do_read = VL_RAND_RESET_I(1);
    __PVT__uart_tx_fifo_fifo_out_first = VL_RAND_RESET_I(1);
    __PVT__uart_tx_fifo_fifo_out_last = VL_RAND_RESET_I(1);
    __PVT__uart_tx_fifo_fifo_out_payload_data = VL_RAND_RESET_I(8);
    __PVT__uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    __PVT__uart_tx_fifo_produce = VL_RAND_RESET_I(4);
    __PVT__uart_tx_fifo_readable = VL_RAND_RESET_I(1);
    __PVT__uart_tx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    __PVT__uart_tx_fifo_syncfifo_writable = VL_RAND_RESET_I(1);
    __PVT__uart_tx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    __PVT__uart_txempty_re = VL_RAND_RESET_I(1);
    __PVT__uart_txfull_re = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5950; ++__Vi0) {
            __PVT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__rom_dat0 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            __PVT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__sram_adr0 = VL_RAND_RESET_I(11);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__main_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__main_ram_adr0 = VL_RAND_RESET_I(14);
    { int __Vi0=0; for (; __Vi0<37; ++__Vi0) {
            __PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__mem_adr0 = VL_RAND_RESET_I(6);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__storage[__Vi0] = VL_RAND_RESET_I(10);
    }}
    __PVT__storage_dat0 = VL_RAND_RESET_I(10);
    __PVT__storage_dat1 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__storage_1[__Vi0] = VL_RAND_RESET_I(10);
    }}
    __PVT__storage_1_dat0 = VL_RAND_RESET_I(10);
    __PVT__storage_1_dat1 = VL_RAND_RESET_I(10);
    __Vcellinp__VexRiscv__reset = VL_RAND_RESET_I(1);
    __PVT__mem_write_block__DOT__we_index = VL_RAND_RESET_I(32);
    __PVT__mem_write_block_1__DOT__we_index_1 = VL_RAND_RESET_I(32);
    __Vdly__bus_errors = VL_RAND_RESET_I(32);
    __Vdly__timer_value = VL_RAND_RESET_I(32);
    __Vdly__uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    __Vdly__uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    __Vdly__uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    __Vdly__interface0_ram_bus_ack = VL_RAND_RESET_I(1);
    __Vdly__interface1_ram_bus_ack = VL_RAND_RESET_I(1);
    __Vdly__uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    __Vdly__ram_bus_ack = VL_RAND_RESET_I(1);
    __Vdlyvset__sram__v0 = 0;
    __Vdlyvset__sram__v1 = 0;
    __Vdlyvset__sram__v2 = 0;
    __Vdlyvset__sram__v3 = 0;
    __Vdlyvset__main_ram__v0 = 0;
    __Vdlyvset__main_ram__v1 = 0;
    __Vdlyvset__main_ram__v2 = 0;
    __Vdlyvset__main_ram__v3 = 0;
    __Vdlyvdim0__storage__v0 = 0;
    __Vdlyvval__storage__v0 = VL_RAND_RESET_I(10);
    __Vdlyvset__storage__v0 = 0;
    __Vdlyvdim0__storage_1__v0 = 0;
    __Vdlyvval__storage_1__v0 = VL_RAND_RESET_I(10);
    __Vdlyvset__storage_1__v0 = 0;
}
