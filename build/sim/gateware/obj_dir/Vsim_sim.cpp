// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__8(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__8\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume 
        = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume;
    vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_consume 
        = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume;
    vlSymsp->TOP__sim.__Vdly__bus_errors = vlSymsp->TOP__sim.__PVT__bus_errors;
    vlSymsp->TOP__sim.__Vdlyvset__storage__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0;
    vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0;
    vlSymsp->TOP__sim.__Vdly__timer_value = vlSymsp->TOP__sim.__PVT__timer_value;
    vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack 
        = vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack;
    vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack 
        = vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack;
    vlSymsp->TOP__sim.__Vdly__ram_bus_ack = vlSymsp->TOP__sim.__PVT__ram_bus_ack;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v3 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v3 = 0U;
    vlSymsp->TOP__sim.__PVT__mem_write_block__DOT__we_index = 4U;
    vlSymsp->TOP__sim.__PVT__mem_write_block_1__DOT__we_index_1 = 4U;
    vlSymsp->TOP__sim.__PVT__storage_1_dat0 = vlSymsp->TOP__sim.__PVT__storage_1
        [vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr];
    vlSymsp->TOP__sim.__PVT__storage_dat0 = vlSymsp->TOP__sim.__PVT__storage
        [vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr];
    if (((IData)(vlTOPp->serial_sink_valid) & (0x10U 
                                               != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_1__v0 
            = vlTOPp->serial_sink_data;
        vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_1__v0 
            = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr;
    }
    vlSymsp->TOP__sim.__PVT__uart_rxfull_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rxfull_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_txempty_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_txempty_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rxempty_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rxempty_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_txfull_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_txfull_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_status_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_status_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_value_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_value_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__bus_errors_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__bus_errors_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_status_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_status_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_en_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_en_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_reload_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_reload_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_load_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_load_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__scratch_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__scratch_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_enable_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_enable_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_enable_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_enable_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read) {
        vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read) {
        vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_consume = 0U;
    }
    if ((0xffffffffU != vlSymsp->TOP__sim.__PVT__bus_errors)) {
        if (vlSymsp->TOP__sim.__PVT__error) {
            vlSymsp->TOP__sim.__Vdly__bus_errors = 
                ((IData)(1U) + vlSymsp->TOP__sim.__PVT__bus_errors);
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__bus_errors = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_pending_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_pending_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re) {
        vlSymsp->TOP__sim.__PVT__timer_pending_r = 
            (1U & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_pending_r = 0U;
    }
    vlSymsp->TOP__sim.__PVT__reset_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__reset_re = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
         & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage__v0 = 
            (0xffU & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
        vlSymsp->TOP__sim.__Vdlyvset__storage__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage__v0 
            = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr;
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (0x10U 
                                               != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_pending_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_pending_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read) {
        vlSymsp->TOP__sim.__PVT__storage_1_dat1 = vlSymsp->TOP__sim.__PVT__storage_1
            [vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume];
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
         & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))) {
        vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re) {
        vlSymsp->TOP__sim.__PVT__uart_pending_r = (3U 
                                                   & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_pending_r = 0U;
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read) {
            vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 
                = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0) 
                            - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__9(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__9\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read) {
        vlSymsp->TOP__sim.__PVT__storage_dat1 = vlSymsp->TOP__sim.__PVT__storage
            [vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume];
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read) {
            vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 
                = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0) 
                            - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__mem_adr0 = (0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr));
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r = 
        (1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                         >> 9U)));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r = 0U;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                = vlSymsp->TOP__sim.__PVT__reset_storage;
        } else {
            if ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) {
                vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                    = vlSymsp->TOP__sim.__PVT__scratch_storage;
            } else {
                if ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) {
                    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                        = vlSymsp->TOP__sim.__PVT__bus_errors;
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    if ((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data)
                    : ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                        ? (0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))
                        : ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                            ? (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))
                            : ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                ? (IData)(vlSymsp->TOP__sim.__PVT__uart_status_status)
                                : ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                    ? (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                        ? (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                            ? (1U & 
                                               (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))
                                            : (0x10U 
                                               == (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))))))));
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                    ? vlSymsp->TOP__sim.__PVT__timer_load_storage
                    : ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                        ? vlSymsp->TOP__sim.__PVT__timer_reload_storage
                        : ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                            ? (IData)(vlSymsp->TOP__sim.__PVT__timer_en_storage)
                            : ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                ? (IData)(vlSymsp->TOP__sim.__PVT__timer_update_value_storage)
                                : ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                    ? vlSymsp->TOP__sim.__PVT__timer_value_status
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                        ? (0U == vlSymsp->TOP__sim.__PVT__timer_value)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr)))
                                            ? (IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending)
                                            : (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage))))))));
        }
    }
    vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc) 
          & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack = 0U;
    }
    vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc) 
          & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack = 0U;
    }
    vlSymsp->TOP__sim.__PVT__state = vlSymsp->TOP__sim.__PVT__next_state;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__state = 0U;
    }
    vlSymsp->TOP__sim.__PVT__slaves = vlSymsp->TOP__sim.__PVT__master;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__slaves = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__self4) & (IData)(vlSymsp->TOP__sim.__PVT__self3)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__shared_ack)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__done)))) {
            vlSymsp->TOP__sim.__PVT__count = (0xfffffU 
                                              & (vlSymsp->TOP__sim.__PVT__count 
                                                 - (IData)(1U)));
        }
    } else {
        vlSymsp->TOP__sim.__PVT__count = 0xf4240U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__count = 0xf4240U;
    }
    vlSymsp->TOP__sim.__PVT__main_ram_adr0 = (0x3fffU 
                                              & vlSymsp->TOP__sim.__PVT__self0);
    vlSymsp->TOP__sim.__PVT__sram_adr0 = (0x7ffU & vlSymsp->TOP__sim.__PVT__self0);
    vlSymsp->TOP__sim.__PVT__rom_dat0 = ((0x173dU >= 
                                          (0x1fffU 
                                           & vlSymsp->TOP__sim.__PVT__self0))
                                          ? vlSymsp->TOP__sim.__PVT__rom
                                         [(0x1fffU 
                                           & vlSymsp->TOP__sim.__PVT__self0)]
                                          : 0U);
    vlSymsp->TOP__sim.__Vdly__ram_bus_ack = 0U;
    if (((((IData)(vlSymsp->TOP__sim.__PVT__self3) 
           & (IData)(vlSymsp->TOP__sim.__PVT__master)) 
          & (IData)(vlSymsp->TOP__sim.__PVT__self4)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__ram_bus_ack = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__10(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__10\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvlsb__sram__v0;
    CData/*7:0*/ __Vdlyvval__sram__v0;
    CData/*4:0*/ __Vdlyvlsb__sram__v1;
    CData/*7:0*/ __Vdlyvval__sram__v1;
    CData/*4:0*/ __Vdlyvlsb__sram__v2;
    CData/*7:0*/ __Vdlyvval__sram__v2;
    CData/*4:0*/ __Vdlyvlsb__sram__v3;
    CData/*7:0*/ __Vdlyvval__sram__v3;
    CData/*4:0*/ __Vdlyvlsb__main_ram__v0;
    CData/*7:0*/ __Vdlyvval__main_ram__v0;
    CData/*4:0*/ __Vdlyvlsb__main_ram__v1;
    CData/*7:0*/ __Vdlyvval__main_ram__v1;
    CData/*4:0*/ __Vdlyvlsb__main_ram__v2;
    CData/*7:0*/ __Vdlyvval__main_ram__v2;
    CData/*4:0*/ __Vdlyvlsb__main_ram__v3;
    CData/*7:0*/ __Vdlyvval__main_ram__v3;
    SData/*10:0*/ __Vdlyvdim0__sram__v0;
    SData/*10:0*/ __Vdlyvdim0__sram__v1;
    SData/*10:0*/ __Vdlyvdim0__sram__v2;
    SData/*10:0*/ __Vdlyvdim0__sram__v3;
    SData/*13:0*/ __Vdlyvdim0__main_ram__v0;
    SData/*13:0*/ __Vdlyvdim0__main_ram__v1;
    SData/*13:0*/ __Vdlyvdim0__main_ram__v2;
    SData/*13:0*/ __Vdlyvdim0__main_ram__v3;
    // Body
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        __Vdlyvval__main_ram__v0 = (0xffU & vlSymsp->TOP__sim.__PVT__self1);
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v0 = 1U;
        __Vdlyvlsb__main_ram__v0 = 0U;
        __Vdlyvdim0__main_ram__v0 = (0x3fffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        __Vdlyvval__main_ram__v1 = (0xffU & (vlSymsp->TOP__sim.__PVT__self1 
                                             >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v1 = 1U;
        __Vdlyvlsb__main_ram__v1 = 8U;
        __Vdlyvdim0__main_ram__v1 = (0x3fffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        __Vdlyvval__main_ram__v2 = (0xffU & (vlSymsp->TOP__sim.__PVT__self1 
                                             >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v2 = 1U;
        __Vdlyvlsb__main_ram__v2 = 0x10U;
        __Vdlyvdim0__main_ram__v2 = (0x3fffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        __Vdlyvval__main_ram__v3 = (0xffU & (vlSymsp->TOP__sim.__PVT__self1 
                                             >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v3 = 1U;
        __Vdlyvlsb__main_ram__v3 = 0x18U;
        __Vdlyvdim0__main_ram__v3 = (0x3fffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        __Vdlyvval__sram__v0 = (0xffU & vlSymsp->TOP__sim.__PVT__self1);
        vlSymsp->TOP__sim.__Vdlyvset__sram__v0 = 1U;
        __Vdlyvlsb__sram__v0 = 0U;
        __Vdlyvdim0__sram__v0 = (0x7ffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        __Vdlyvval__sram__v1 = (0xffU & (vlSymsp->TOP__sim.__PVT__self1 
                                         >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v1 = 1U;
        __Vdlyvlsb__sram__v1 = 8U;
        __Vdlyvdim0__sram__v1 = (0x7ffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        __Vdlyvval__sram__v2 = (0xffU & (vlSymsp->TOP__sim.__PVT__self1 
                                         >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v2 = 1U;
        __Vdlyvlsb__sram__v2 = 0x10U;
        __Vdlyvdim0__sram__v2 = (0x7ffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        __Vdlyvval__sram__v3 = (0xffU & (vlSymsp->TOP__sim.__PVT__self1 
                                         >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v3 = 1U;
        __Vdlyvlsb__sram__v3 = 0x18U;
        __Vdlyvdim0__sram__v3 = (0x7ffU & vlSymsp->TOP__sim.__PVT__self0);
    }
    if (vlSymsp->TOP__sim.__PVT__grant) {
        if (vlSymsp->TOP__sim.__PVT__grant) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__request) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__request))) {
                    vlSymsp->TOP__sim.__PVT__grant = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__request)))) {
            if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__request))) {
                vlSymsp->TOP__sim.__PVT__grant = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__grant = 0U;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0) {
        vlSymsp->TOP__sim.__PVT__storage_1[vlSymsp->TOP__sim.__Vdlyvdim0__storage_1__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_1__v0;
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume = vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_consume;
    if (vlSymsp->TOP__sim.__Vdlyvset__storage__v0) {
        vlSymsp->TOP__sim.__PVT__storage[vlSymsp->TOP__sim.__Vdlyvdim0__storage__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage__v0;
    }
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume = vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume;
    vlSymsp->TOP__sim.__PVT__bus_errors = vlSymsp->TOP__sim.__Vdly__bus_errors;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0 = vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0 = vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0;
    vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack 
        = vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack;
    vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack 
        = vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack;
    vlSymsp->TOP__sim.__PVT__ram_bus_ack = vlSymsp->TOP__sim.__Vdly__ram_bus_ack;
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v0) {
        vlSymsp->TOP__sim.__PVT__main_ram[__Vdlyvdim0__main_ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main_ram__v0))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [__Vdlyvdim0__main_ram__v0]) | ((IData)(__Vdlyvval__main_ram__v0) 
                                                << (IData)(__Vdlyvlsb__main_ram__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v1) {
        vlSymsp->TOP__sim.__PVT__main_ram[__Vdlyvdim0__main_ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main_ram__v1))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [__Vdlyvdim0__main_ram__v1]) | ((IData)(__Vdlyvval__main_ram__v1) 
                                                << (IData)(__Vdlyvlsb__main_ram__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v2) {
        vlSymsp->TOP__sim.__PVT__main_ram[__Vdlyvdim0__main_ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main_ram__v2))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [__Vdlyvdim0__main_ram__v2]) | ((IData)(__Vdlyvval__main_ram__v2) 
                                                << (IData)(__Vdlyvlsb__main_ram__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v3) {
        vlSymsp->TOP__sim.__PVT__main_ram[__Vdlyvdim0__main_ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main_ram__v3))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [__Vdlyvdim0__main_ram__v3]) | ((IData)(__Vdlyvval__main_ram__v3) 
                                                << (IData)(__Vdlyvlsb__main_ram__v3)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v0) {
        vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__sram__v0))) 
                & vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v0]) 
               | ((IData)(__Vdlyvval__sram__v0) << (IData)(__Vdlyvlsb__sram__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v1) {
        vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__sram__v1))) 
                & vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v1]) 
               | ((IData)(__Vdlyvval__sram__v1) << (IData)(__Vdlyvlsb__sram__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v2) {
        vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__sram__v2))) 
                & vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v2]) 
               | ((IData)(__Vdlyvval__sram__v2) << (IData)(__Vdlyvlsb__sram__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v3) {
        vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__sram__v3))) 
                & vlSymsp->TOP__sim.__PVT__sram[__Vdlyvdim0__sram__v3]) 
               | ((IData)(__Vdlyvval__sram__v3) << (IData)(__Vdlyvlsb__sram__v3)));
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__11(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__11\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__uart_tx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_r))) {
        vlSymsp->TOP__sim.__PVT__uart_tx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1));
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                ? vlSymsp->TOP__sim.__PVT__mem[vlSymsp->TOP__sim.__PVT__mem_adr0]
                : 0U);
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re) {
        vlSymsp->TOP__sim.__PVT__scratch_storage = vlSymsp->TOP__sim.__PVT__interface1_dat_w;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__scratch_storage = 0x12345678U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re) {
        vlSymsp->TOP__sim.__PVT__reset_storage = (3U 
                                                  & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__reset_storage = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0));
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re) {
        vlSymsp->TOP__sim.__PVT__uart_enable_storage 
            = (3U & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_enable_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re) {
        vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable = 1U;
    } else {
        if (vlTOPp->serial_source_ready) {
            vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable = 0U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable = 1U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__uart_rx_clear) {
            vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable = 0U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re) {
        vlSymsp->TOP__sim.__PVT__timer_update_value_storage 
            = (1U & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_update_value_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re) {
        vlSymsp->TOP__sim.__PVT__timer_enable_storage 
            = (1U & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_enable_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__timer_zero_clear) {
        vlSymsp->TOP__sim.__PVT__timer_zero_pending = 0U;
    }
    if (((0U == vlSymsp->TOP__sim.__PVT__timer_value) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__timer_zero_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_zero_pending = 0U;
    }
    vlSymsp->TOP__sim.__Vdly__timer_value = ((IData)(vlSymsp->TOP__sim.__PVT__timer_en_storage)
                                              ? ((0U 
                                                  == vlSymsp->TOP__sim.__PVT__timer_value)
                                                  ? vlSymsp->TOP__sim.__PVT__timer_reload_storage
                                                  : 
                                                 (vlSymsp->TOP__sim.__PVT__timer_value 
                                                  - (IData)(1U)))
                                              : vlSymsp->TOP__sim.__PVT__timer_load_storage);
    if (vlSymsp->TOP__sim.__PVT__timer_update_value_re) {
        vlSymsp->TOP__sim.__PVT__timer_value_status 
            = vlSymsp->TOP__sim.__PVT__timer_value;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_value_status = 0U;
        vlSymsp->TOP__sim.__Vdly__timer_value = 0U;
    }
    vlSymsp->TOP__sim.__PVT__interface0_ack = 0U;
    if (vlSymsp->TOP__sim.__PVT__state) {
        vlSymsp->TOP__sim.__PVT__interface0_ack = 1U;
    }
    vlSymsp->TOP__sim.__PVT__done = (0U == vlSymsp->TOP__sim.__PVT__count);
    vlSymsp->TOP__sim.__PVT__error = 0U;
    if ((0U == vlSymsp->TOP__sim.__PVT__count)) {
        vlSymsp->TOP__sim.__PVT__error = 1U;
    }
    vlSymsp->TOP__sim.__PVT__interface0_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__state) {
        vlSymsp->TOP__sim.__PVT__interface0_dat_r = 
            (((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
               | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r) 
              | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r) 
             | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r);
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_re) 
         & ((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_r) 
            >> 1U))) {
        vlSymsp->TOP__sim.__PVT__uart_rx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__timer_zero_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__timer_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__timer_pending_r))) {
        vlSymsp->TOP__sim.__PVT__timer_zero_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__shared_ack = ((((IData)(vlSymsp->TOP__sim.__PVT__ram_bus_ack) 
                                             | (IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack)) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__interface0_ack));
    if ((0U == vlSymsp->TOP__sim.__PVT__count)) {
        vlSymsp->TOP__sim.__PVT__shared_ack = 1U;
    }
    vlSymsp->TOP__sim.__PVT__soc_rst = 0U;
    if (vlSymsp->TOP__sim.__PVT__reset_re) {
        vlSymsp->TOP__sim.__PVT__soc_rst = (1U & (IData)(vlSymsp->TOP__sim.__PVT__reset_storage));
    }
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
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 
        ((2U & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)) 
         | (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)));
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 
        ((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)) 
         | ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable) 
            << 1U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)) 
              | (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_clear)));
    vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d = 
        (0U == vlSymsp->TOP__sim.__PVT__timer_value);
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_update_value_re 
        = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_update_value_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re) {
        vlSymsp->TOP__sim.__PVT__timer_en_storage = 
            (1U & vlSymsp->TOP__sim.__PVT__interface1_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_en_storage = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__12(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__12\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re) {
        vlSymsp->TOP__sim.__PVT__timer_reload_storage 
            = vlSymsp->TOP__sim.__PVT__interface1_dat_w;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_reload_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re) {
        vlSymsp->TOP__sim.__PVT__timer_load_storage 
            = vlSymsp->TOP__sim.__PVT__interface1_dat_w;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_load_storage = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re));
    vlSymsp->TOP__sim.__PVT__timer_value = vlSymsp->TOP__sim.__Vdly__timer_value;
    vlSymsp->TOP__sim.__PVT__int_rst = 0U;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__13(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__13\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__sim.__PVT__self1 = ((IData)(vlSymsp->TOP__sim.__PVT__grant)
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data
                                       : 0U);
    vlSymsp->TOP__sim.__PVT__ibus_ack = ((IData)(vlSymsp->TOP__sim.__PVT__shared_ack) 
                                         & (~ (IData)(vlSymsp->TOP__sim.__PVT__grant)));
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
    if (vlSymsp->TOP__sim.__PVT__grant) {
        vlSymsp->TOP__sim.__PVT__self6 = ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                           ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)
                                               ? 7U
                                               : 2U)
                                           : 0U);
        vlSymsp->TOP__sim.__PVT__dbus_ack = ((IData)(vlSymsp->TOP__sim.__PVT__shared_ack) 
                                             & 1U);
        vlSymsp->TOP__sim.__PVT__self0 = (0x3fffffffU 
                                          & (((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                               ? ((0xffffffe0U 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                  | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBusWishbone_ADR) 
                                                     << 2U))
                                               : (0xfffffffcU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                             >> 2U));
    } else {
        vlSymsp->TOP__sim.__PVT__self6 = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                           ? 7U : 2U);
        vlSymsp->TOP__sim.__PVT__dbus_ack = 0U;
        vlSymsp->TOP__sim.__PVT__self0 = (0x3fffffffU 
                                          & ((0x3ffffff8U 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 2U)) 
                                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
    }
    vlSymsp->TOP__sim.__PVT__request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                         << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    if (vlSymsp->TOP__sim.__PVT__grant) {
        vlSymsp->TOP__sim.__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSymsp->TOP__sim.__PVT__self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSymsp->TOP__sim.__PVT__self5 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                          & 1U);
        vlSymsp->TOP__sim.__PVT__self2 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                           ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                           : 0xfU);
    } else {
        vlSymsp->TOP__sim.__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
        vlSymsp->TOP__sim.__PVT__self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
        vlSymsp->TOP__sim.__PVT__self5 = 0U;
        vlSymsp->TOP__sim.__PVT__self2 = 0xfU;
    }
    vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset = 
        (1U & ((IData)(vlSymsp->TOP__sim.__PVT__int_rst) 
               | ((IData)(vlSymsp->TOP__sim.__PVT__soc_rst) 
                  | ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                     >> 1U))));
    vlSymsp->TOP__sim.__PVT__interface1_dat_w = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__state)))) {
        vlSymsp->TOP__sim.__PVT__interface1_dat_w = vlSymsp->TOP__sim.__PVT__self1;
    }
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
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__14(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__14\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__15(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__15\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vsim_sim::_combo__TOP__sim__16(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_combo__TOP__sim__16\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)) 
              | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
}
