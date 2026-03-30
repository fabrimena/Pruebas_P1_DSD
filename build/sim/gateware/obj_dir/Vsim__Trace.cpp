// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
        vlTOPp->traceChgSub1(userp, tracep);
        vlTOPp->traceChgSub2(userp, tracep);
        vlTOPp->traceChgSub3(userp, tracep);
        vlTOPp->traceChgSub4(userp, tracep);
        vlTOPp->traceChgSub5(userp, tracep);
        vlTOPp->traceChgSub6(userp, tracep);
    }
}

void Vsim::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSymsp->TOP__sim.__PVT__self7),2);
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1719));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+3,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
            tracep->chgCData(oldp+4,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data),8);
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable));
            tracep->chgSData(oldp+6,((0x7fffU & vlSymsp->TOP__sim.__PVT__self0)),15);
            tracep->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__error));
            tracep->chgIData(oldp+8,(vlSymsp->TOP__sim.__PVT__bus_errors),32);
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__bus_errors_re));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_we));
            tracep->chgIData(oldp+11,(vlSymsp->TOP__sim.__PVT__count),20);
            tracep->chgBit(oldp+12,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                           >> 1U))));
            tracep->chgCData(oldp+13,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))),6);
            tracep->chgIData(oldp+14,(vlSymsp->TOP__sim.__PVT__interface1_dat_w),32);
            tracep->chgBit(oldp+15,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_re));
            tracep->chgCData(oldp+16,((3U & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),2);
            tracep->chgBit(oldp+17,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re));
            tracep->chgCData(oldp+18,(vlSymsp->TOP__sim.__PVT__reset_storage),2);
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_we));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re));
            tracep->chgIData(oldp+21,(vlSymsp->TOP__sim.__PVT__scratch_storage),32);
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_we));
            tracep->chgBit(oldp+23,((0U == (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                             >> 9U)))));
            tracep->chgBit(oldp+24,((1U & vlSymsp->TOP__sim.__PVT__interface1_dat_w)));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__timer_en_storage));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_we));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__timer_enable_storage));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_we));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__timer_zero_pending));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_we));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_re));
            tracep->chgBit(oldp+35,((0U == vlSymsp->TOP__sim.__PVT__timer_value)));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_we));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re));
            tracep->chgIData(oldp+38,(vlSymsp->TOP__sim.__PVT__timer_load_storage),32);
            tracep->chgBit(oldp+39,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_we));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re));
            tracep->chgIData(oldp+41,(vlSymsp->TOP__sim.__PVT__timer_reload_storage),32);
            tracep->chgBit(oldp+42,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_we));
            tracep->chgBit(oldp+43,((2U == (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                             >> 9U)))));
            tracep->chgBit(oldp+44,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim.__PVT__timer_update_value_storage));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_we));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_re));
            tracep->chgIData(oldp+48,(vlSymsp->TOP__sim.__PVT__timer_value_status),32);
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_we));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re));
            tracep->chgCData(oldp+51,(vlSymsp->TOP__sim.__PVT__uart_enable_storage),2);
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_we));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re));
            tracep->chgCData(oldp+54,(vlSymsp->TOP__sim.__PVT__uart_pending_status),2);
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_we));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_re));
            tracep->chgCData(oldp+57,(vlSymsp->TOP__sim.__PVT__uart_status_status),2);
            tracep->chgBit(oldp+58,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_we));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_re));
            tracep->chgBit(oldp+60,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_we));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_re));
            tracep->chgBit(oldp+63,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_we));
            tracep->chgBit(oldp+65,((3U == (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                             >> 9U)))));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_re));
            tracep->chgBit(oldp+67,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_we));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_re));
            tracep->chgBit(oldp+70,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_we));
            tracep->chgCData(oldp+72,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                        ? vlSymsp->TOP__sim.__PVT__mem
                                       [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                        : 0U)),8);
            tracep->chgSData(oldp+73,(vlSymsp->TOP__sim.__PVT__interface1_adr),14);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r),32);
            tracep->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__interface1_re));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__interface1_we));
            tracep->chgIData(oldp+77,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r),32);
            tracep->chgIData(oldp+78,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r),32);
            tracep->chgBit(oldp+79,((1U == (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                             >> 9U)))));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r));
            tracep->chgIData(oldp+81,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r),32);
            tracep->chgIData(oldp+82,((((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                                         | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r) 
                                        | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r) 
                                       | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r)),32);
            tracep->chgIData(oldp+83,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__dbus_ack));
            tracep->chgIData(oldp+85,((0x3fffffffU 
                                       & (((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                            ? ((0xffffffe0U 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBusWishbone_ADR) 
                                                  << 2U))
                                            : (0xfffffffcU 
                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                          >> 2U))),30);
            tracep->chgCData(oldp+86,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                        ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)
                                            ? 7U : 2U)
                                        : 0U)),3);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid));
            tracep->chgIData(oldp+88,(vlSymsp->TOP__sim.__PVT__shared_dat_r),32);
            tracep->chgIData(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
            tracep->chgCData(oldp+90,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                        ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                        : 0xfU)),4);
            tracep->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
            tracep->chgBit(oldp+92,((0U == vlSymsp->TOP__sim.__PVT__count)));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__sim.__PVT__grant));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim.__PVT__ibus_ack));
            tracep->chgIData(oldp+95,(((0x3ffffff8U 
                                        & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                           >> 2U)) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
            tracep->chgCData(oldp+96,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                        ? 7U : 2U)),3);
            tracep->chgBit(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__sim.__PVT__int_rst));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim.__PVT__interface0_ack));
            tracep->chgIData(oldp+101,(vlSymsp->TOP__sim.__PVT__self0),30);
            tracep->chgCData(oldp+102,(vlSymsp->TOP__sim.__PVT__self6),3);
            tracep->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__interface0_cyc));
            tracep->chgIData(oldp+104,(vlSymsp->TOP__sim.__PVT__interface0_dat_r),32);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__sim.__PVT__self1),32);
            tracep->chgBit(oldp+106,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc));
            tracep->chgIData(oldp+108,(vlSymsp->TOP__sim.__PVT__sram
                                       [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
            tracep->chgCData(oldp+109,(vlSymsp->TOP__sim.__PVT__self2),4);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__sim.__PVT__self4));
            tracep->chgBit(oldp+111,(vlSymsp->TOP__sim.__PVT__self5));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc));
            tracep->chgIData(oldp+114,(vlSymsp->TOP__sim.__PVT__main_ram
                                       [vlSymsp->TOP__sim.__PVT__main_ram_adr0]),32);
            tracep->chgIData(oldp+115,(vlSymsp->TOP__sim.__PVT__interrupt),32);
            tracep->chgCData(oldp+116,(vlSymsp->TOP__sim.__PVT__master),4);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__next_state));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__sim.__PVT__ram_bus_ack));
            tracep->chgBit(oldp+119,(((IData)(vlSymsp->TOP__sim.__PVT__self3) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__master))));
            tracep->chgCData(oldp+120,(vlSymsp->TOP__sim.__PVT__request),2);
            tracep->chgBit(oldp+121,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__soc_rst) 
                                            | ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                               >> 1U)))));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__sim.__PVT__reset_re));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__sim.__PVT__scratch_re));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__sim.__PVT__self3));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__sim.__PVT__shared_ack));
            tracep->chgBit(oldp+126,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_first));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_last));
            tracep->chgCData(oldp+128,(vlSymsp->TOP__sim.__PVT__slaves),4);
            tracep->chgBit(oldp+129,(vlSymsp->TOP__sim.__PVT__soc_rst));
            tracep->chgSData(oldp+130,((0x7ffU & vlSymsp->TOP__sim.__PVT__self0)),11);
            tracep->chgCData(oldp+131,(vlSymsp->TOP__sim.__PVT__sram0_we),4);
            tracep->chgSData(oldp+132,((0x3fffU & vlSymsp->TOP__sim.__PVT__self0)),14);
            tracep->chgCData(oldp+133,(vlSymsp->TOP__sim.__PVT__sram1_we),4);
            tracep->chgBit(oldp+134,(vlSymsp->TOP__sim.__PVT__state));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__timer_en_re));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__timer_enable_re));
            tracep->chgBit(oldp+137,(((IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage))));
            tracep->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__timer_load_re));
            tracep->chgBit(oldp+139,(vlSymsp->TOP__sim.__PVT__timer_pending_r));
            tracep->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__timer_pending_re));
            tracep->chgBit(oldp+141,(vlSymsp->TOP__sim.__PVT__timer_reload_re));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__sim.__PVT__timer_status_re));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__sim.__PVT__timer_update_value_re));
            tracep->chgIData(oldp+144,(vlSymsp->TOP__sim.__PVT__timer_value),32);
            tracep->chgBit(oldp+145,(vlSymsp->TOP__sim.__PVT__timer_value_re));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__sim.__PVT__timer_zero_clear));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d));
            tracep->chgBit(oldp+148,(vlSymsp->TOP__sim.__PVT__uart_enable_re));
            tracep->chgBit(oldp+149,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                            | (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                               >> 1U)))));
            tracep->chgCData(oldp+150,(vlSymsp->TOP__sim.__PVT__uart_pending_r),2);
            tracep->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__uart_pending_re));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage) 
                                            >> 1U))));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__sim.__PVT__uart_rx_clear));
            tracep->chgCData(oldp+155,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume),4);
            tracep->chgBit(oldp+156,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read));
            tracep->chgBit(oldp+157,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_first));
            tracep->chgBit(oldp+158,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_last));
            tracep->chgCData(oldp+159,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data),8);
            tracep->chgCData(oldp+160,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0),5);
            tracep->chgCData(oldp+161,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0) 
                                                 + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))),5);
            tracep->chgCData(oldp+162,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce),4);
            tracep->chgSData(oldp+163,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
            tracep->chgBit(oldp+164,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re));
            tracep->chgBit(oldp+165,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
            tracep->chgCData(oldp+166,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr),4);
            tracep->chgSData(oldp+167,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
        }
    }
}

void Vsim::traceChgSub1(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 169);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__sim.__PVT__uart_rxempty_re));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim.__PVT__uart_rxfull_re));
            tracep->chgCData(oldp+2,((0xffU & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),8);
            tracep->chgBit(oldp+3,(vlSymsp->TOP__sim.__PVT__uart_rxtx_re));
            tracep->chgBit(oldp+4,(vlSymsp->TOP__sim.__PVT__uart_rxtx_we));
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim.__PVT__uart_status_re));
            tracep->chgBit(oldp+6,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
            tracep->chgBit(oldp+7,((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage))));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__uart_tx_clear));
            tracep->chgCData(oldp+9,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume),4);
            tracep->chgCData(oldp+10,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0),5);
            tracep->chgCData(oldp+11,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0) 
                                                + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))),5);
            tracep->chgCData(oldp+12,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce),4);
            tracep->chgSData(oldp+13,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
            tracep->chgSData(oldp+14,((0xffU & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),10);
            tracep->chgBit(oldp+15,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
            tracep->chgCData(oldp+16,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr),4);
            tracep->chgSData(oldp+17,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
            tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
                                     & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__uart_txempty_re));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__uart_txfull_re));
            tracep->chgBit(oldp+21,((((IData)(vlSymsp->TOP__sim.__PVT__self4) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__self3)) 
                                     & (~ (IData)(vlSymsp->TOP__sim.__PVT__shared_ack)))));
            tracep->chgSData(oldp+22,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
            tracep->chgSData(oldp+23,(vlSymsp->TOP__sim.__PVT__main_ram_adr0),14);
            tracep->chgCData(oldp+24,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
            tracep->chgSData(oldp+25,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
            tracep->chgSData(oldp+26,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
            tracep->chgSData(oldp+27,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
            tracep->chgSData(oldp+28,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
            tracep->chgSData(oldp+29,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
            tracep->chgSData(oldp+30,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
            tracep->chgSData(oldp+31,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
            tracep->chgSData(oldp+32,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
            tracep->chgSData(oldp+33,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
            tracep->chgSData(oldp+34,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
            tracep->chgSData(oldp+35,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
            tracep->chgSData(oldp+36,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
            tracep->chgSData(oldp+37,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
            tracep->chgSData(oldp+38,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
            tracep->chgSData(oldp+39,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
            tracep->chgSData(oldp+40,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
            tracep->chgSData(oldp+41,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
            tracep->chgSData(oldp+42,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
            tracep->chgSData(oldp+43,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
            tracep->chgSData(oldp+44,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
            tracep->chgSData(oldp+45,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
            tracep->chgSData(oldp+46,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
            tracep->chgSData(oldp+47,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
            tracep->chgSData(oldp+48,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
            tracep->chgSData(oldp+49,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
            tracep->chgSData(oldp+50,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
            tracep->chgSData(oldp+51,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
            tracep->chgSData(oldp+52,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
            tracep->chgSData(oldp+53,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
            tracep->chgSData(oldp+54,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
            tracep->chgSData(oldp+55,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
            tracep->chgSData(oldp+56,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
            tracep->chgIData(oldp+57,(vlSymsp->TOP__sim.__PVT__mem_write_block__DOT__we_index),32);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__sim.__PVT__mem_write_block_1__DOT__we_index_1),32);
            tracep->chgBit(oldp+59,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
            tracep->chgBit(oldp+62,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
            tracep->chgBit(oldp+63,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
            tracep->chgIData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
            tracep->chgBit(oldp+68,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
            tracep->chgIData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
            tracep->chgBit(oldp+70,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
            tracep->chgIData(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
            tracep->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
            tracep->chgBit(oldp+75,((0U != (0x1fU & 
                                            (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xfU)))));
            tracep->chgCData(oldp+76,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                >> 5U))),7);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
            tracep->chgIData(oldp+78,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
            tracep->chgBit(oldp+79,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                           | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                                 | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
            tracep->chgBit(oldp+81,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                        | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
            tracep->chgIData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
            tracep->chgBit(oldp+83,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
            tracep->chgIData(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
            tracep->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
            tracep->chgIData(oldp+86,((0xffffffe0U 
                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
            tracep->chgIData(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
            tracep->chgIData(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
            tracep->chgCData(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
            tracep->chgCData(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
            tracep->chgQData(oldp+104,((0xfffffffffffffULL 
                                        & (((((QData)((IData)(
                                                              (0x7ffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                              << 0x21U) 
                                             | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
                                            + (((QData)((IData)(
                                                                (3U 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                                << 0x32U) 
                                               | (0x3ffffffffffffULL 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                     << 0x10U)))) 
                                           + (((QData)((IData)(
                                                               (3U 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                               << 0x32U) 
                                              | (0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                    << 0x10U)))))),52);
            tracep->chgQData(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
            tracep->chgQData(oldp+108,((0x3ffffffffULL 
                                        & VL_MULS_QQQ(34,34,34, 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
            tracep->chgQData(oldp+110,((0x3ffffffffULL 
                                        & VL_MULS_QQQ(34,34,34, 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, 
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
            tracep->chgQData(oldp+112,((0x3ffffffffULL 
                                        & VL_MULS_QQQ(34,34,34, 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, 
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
            tracep->chgIData(oldp+114,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                        * (0xffffU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
            tracep->chgIData(oldp+115,((0xfffffffeU 
                                        & (((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                             ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                             : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                           + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
            tracep->chgBit(oldp+116,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                                       != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                                      | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                         & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                             ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x15U) 
                                                ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                   >> 1U))
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                 ? 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x15U)
                                                 : 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 8U)))))));
            tracep->chgIData(oldp+117,((IData)((0x1ffffffffULL 
                                                & VL_SHIFTRS_QQI(33,33,5, 
                                                                 (((QData)((IData)(
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                                >> 0x1fU)))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                                 (0x1fU 
                                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4))))),32);
            tracep->chgIData(oldp+118,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                         ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                             ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                             : ((1U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                                 ? 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                 | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                                 : 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                 ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)))
                                         : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                             ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)
                                             : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
            tracep->chgIData(oldp+120,(((0U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))
                                         ? ((0xff000000U 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                << 0x18U)) 
                                            | ((0xff0000U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                                         : ((1U == 
                                             (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU)))
                                             ? ((0xffff0000U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                             : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
            tracep->chgBit(oldp+121,((0x20U != (0x7fU 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 7U)))));
            tracep->chgBit(oldp+122,((1U & (~ (((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                     >> 0xdU))) 
                                                & (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                       >> 0xfU)))) 
                                               | ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                       >> 0xdU))) 
                                                  & (0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                         >> 0xfU)))))))));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
            tracep->chgBit(oldp+124,((1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x14U) 
                                            & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                  >> 3U))))));
            tracep->chgBit(oldp+125,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+126,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+127,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x1dU))));
        }
    }
}

void Vsim::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 297);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
            tracep->chgBit(oldp+2,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x1cU))));
            tracep->chgCData(oldp+3,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x1aU))),2);
            tracep->chgBit(oldp+4,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x19U))));
            tracep->chgCData(oldp+5,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x15U))),2);
            tracep->chgCData(oldp+6,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x12U))),2);
            tracep->chgBit(oldp+7,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x11U))));
            tracep->chgBit(oldp+8,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x10U))));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
            tracep->chgBit(oldp+10,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xdU))));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
            tracep->chgBit(oldp+12,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xcU))));
            tracep->chgBit(oldp+13,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xbU))));
            tracep->chgCData(oldp+14,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 8U))),2);
            tracep->chgCData(oldp+15,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 6U))),2);
            tracep->chgCData(oldp+16,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 1U))),2);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
            tracep->chgIData(oldp+20,(((IData)(4U) 
                                       + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
            tracep->chgIData(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
            tracep->chgBit(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
            tracep->chgQData(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
            tracep->chgQData(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
            tracep->chgQData(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
            tracep->chgQData(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
            tracep->chgIData(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
            tracep->chgCData(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
            tracep->chgCData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
            tracep->chgIData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
            tracep->chgBit(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
            tracep->chgIData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
            tracep->chgCData(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
            tracep->chgBit(oldp+48,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xfU))));
            tracep->chgBit(oldp+49,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 5U))));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
            tracep->chgIData(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
            tracep->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
            tracep->chgIData(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
            tracep->chgIData(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
            tracep->chgCData(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
            tracep->chgCData(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
            tracep->chgCData(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
            tracep->chgBit(oldp+66,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 3U))));
            tracep->chgBit(oldp+67,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x14U))));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
            tracep->chgCData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4),32);
            tracep->chgIData(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
            tracep->chgCData(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
            tracep->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
            tracep->chgBit(oldp+75,(((0x17U == (0x5fU 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                        | ((0x1073U 
                                            == (0x107fU 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                           | ((0x2073U 
                                               == (0x207fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                              | ((0x4063U 
                                                  == 
                                                  (0x407fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                 | ((0x2013U 
                                                     == 
                                                     (0x207fU 
                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    | ((0x13U 
                                                        == 
                                                        (0x107fU 
                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x603fU 
                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                          | ((3U 
                                                              == 
                                                              (0x207fU 
                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                             | ((3U 
                                                                 == 
                                                                 (0x505fU 
                                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                | ((0x63U 
                                                                    == 
                                                                    (0x707bU 
                                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                   | ((0xfU 
                                                                       == 
                                                                       (0x607fU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                      | ((0x33U 
                                                                          == 
                                                                          (0xfc00007fU 
                                                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                         | ((0x500fU 
                                                                             == 
                                                                             (0x1f0707fU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                            | ((0x5013U 
                                                                                == 
                                                                                (0xbe00705fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                               | ((0x1013U 
                                                                                == 
                                                                                (0xfe00305fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
            tracep->chgIData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
            tracep->chgBit(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
            tracep->chgIData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
            tracep->chgBit(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
            tracep->chgIData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
            tracep->chgBit(oldp+86,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 4U))));
            tracep->chgBit(oldp+87,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
            tracep->chgCData(oldp+92,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x17U))),2);
            tracep->chgIData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
            tracep->chgIData(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
            tracep->chgBit(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
            tracep->chgBit(oldp+102,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                                            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
            tracep->chgBit(oldp+103,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                       & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers))) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
            tracep->chgBit(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
            tracep->chgBit(oldp+110,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                                      | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
            tracep->chgBit(oldp+111,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
            tracep->chgBit(oldp+112,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
            tracep->chgBit(oldp+113,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                       & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
            tracep->chgBit(oldp+121,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
            tracep->chgBit(oldp+122,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                       & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
            tracep->chgBit(oldp+126,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
            tracep->chgBit(oldp+127,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
            tracep->chgBit(oldp+130,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
            tracep->chgBit(oldp+131,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
            tracep->chgIData(oldp+132,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
            tracep->chgBit(oldp+133,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
            tracep->chgBit(oldp+137,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
            tracep->chgBit(oldp+138,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
            tracep->chgCData(oldp+139,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
            tracep->chgIData(oldp+140,((0xfffffffcU 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
            tracep->chgBit(oldp+141,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                                      | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
        }
    }
}

void Vsim::traceChgSub3(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 439);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)))));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
            tracep->chgIData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
            tracep->chgCData(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
            tracep->chgCData(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_last));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
            tracep->chgIData(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
            tracep->chgBit(oldp+8,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
            tracep->chgCData(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
            tracep->chgIData(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
            tracep->chgIData(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
            tracep->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_allowCsrSignal));
            tracep->chgBit(oldp+17,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
            tracep->chgIData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
            tracep->chgBit(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
            tracep->chgBit(oldp+24,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_externalInterrupt)));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
            tracep->chgCData(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
            tracep->chgBit(oldp+27,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
            tracep->chgIData(oldp+29,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                            ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                                : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
            tracep->chgIData(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
            tracep->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_fire));
            tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
            tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
            tracep->chgBit(oldp+40,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
            tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                                     & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
            tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
            tracep->chgBit(oldp+49,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
            tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
            tracep->chgBit(oldp+54,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
            tracep->chgBit(oldp+56,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
            tracep->chgBit(oldp+57,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
            tracep->chgBit(oldp+58,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
            tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                     & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack))));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
            tracep->chgIData(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l245));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l262));
            tracep->chgBit(oldp+70,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                           | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN))))));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready));
            tracep->chgBit(oldp+72,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                      ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr)
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr))));
            tracep->chgBit(oldp+73,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                      ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached))));
            tracep->chgIData(oldp+74,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address)),32);
            tracep->chgIData(oldp+75,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data)),32);
            tracep->chgCData(oldp+76,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                        ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask)
                                        : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask))),4);
            tracep->chgCData(oldp+77,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                        ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size)
                                        : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size))),3);
            tracep->chgBit(oldp+78,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last))));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached));
            tracep->chgIData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address),32);
            tracep->chgIData(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data),32);
            tracep->chgCData(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask),4);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size),3);
            tracep->chgBit(oldp+86,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last));
            tracep->chgBit(oldp+87,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
            tracep->chgIData(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
            tracep->chgCData(oldp+89,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU))),2);
            tracep->chgBit(oldp+90,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
            tracep->chgBit(oldp+91,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
            tracep->chgBit(oldp+92,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l533));
            tracep->chgBit(oldp+94,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
            tracep->chgCData(oldp+95,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
            tracep->chgCData(oldp+96,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                                >> 8U))),8);
            tracep->chgCData(oldp+97,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+98,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                                >> 0x18U))),8);
            tracep->chgIData(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
            tracep->chgCData(oldp+100,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                              >> 0xcU))),2);
            tracep->chgIData(oldp+101,(((0U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                   >> 0xcU)))
                                         ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1
                                         : ((1U == 
                                             (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 0xcU)))
                                             ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3
                                             : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
            tracep->chgBit(oldp+102,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
            tracep->chgBit(oldp+103,((0U == (0x1fU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 7U)))));
            tracep->chgCData(oldp+104,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+105,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
            tracep->chgIData(oldp+108,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                         : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                             ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                             : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)))),32);
            tracep->chgCData(oldp+109,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)),5);
            tracep->chgIData(oldp+110,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
            tracep->chgBit(oldp+111,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
            tracep->chgBit(oldp+113,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
            tracep->chgCData(oldp+114,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
            tracep->chgBit(oldp+116,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
            tracep->chgCData(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
            tracep->chgIData(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
            tracep->chgBit(oldp+119,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                      == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0xfU)))));
            tracep->chgBit(oldp+120,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                      == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0x14U)))));
            tracep->chgBit(oldp+121,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                >> 7U)) 
                                      == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0xfU)))));
            tracep->chgBit(oldp+122,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                >> 7U)) 
                                      == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0x14U)))));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
            tracep->chgBit(oldp+124,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
            tracep->chgBit(oldp+126,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
            tracep->chgBit(oldp+129,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
            tracep->chgBit(oldp+130,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
            tracep->chgBit(oldp+131,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
            tracep->chgBit(oldp+132,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
            tracep->chgBit(oldp+133,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
            tracep->chgBit(oldp+134,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
            tracep->chgBit(oldp+135,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 5U)))));
            tracep->chgBit(oldp+136,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+137,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                      & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
            tracep->chgBit(oldp+138,((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                      == vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)));
            tracep->chgCData(oldp+139,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+140,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                      & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0x15U) 
                                             ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                >> 1U))
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                              ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x15U)
                                              : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 8U))))));
        }
    }
}

void Vsim::traceChgSub4(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 580);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp8[3];
    WData/*95:0*/ __Vtemp9[3];
    WData/*95:0*/ __Vtemp10[3];
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp12[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
            tracep->chgIData(oldp+2,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                      + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
            tracep->chgIData(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
            tracep->chgCData(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
            tracep->chgBit(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
            tracep->chgCData(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
            tracep->chgQData(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
            tracep->chgQData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
            tracep->chgBit(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
            tracep->chgCData(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
            tracep->chgIData(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
            tracep->chgBit(oldp+27,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
            tracep->chgCData(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302_1));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302_2));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1340));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
            tracep->chgBit(oldp+39,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
            tracep->chgCData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
            tracep->chgCData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1390));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1456));
            tracep->chgCData(oldp+46,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 0x1cU))),2);
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
            tracep->chgBit(oldp+48,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                                     | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                         & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                        | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                           & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
            tracep->chgBit(oldp+49,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
            tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1555));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
            tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
            tracep->chgBit(oldp+57,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xdU))));
            tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
            tracep->chgSData(oldp+59,((0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x14U))),12);
            tracep->chgBit(oldp+60,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU))) 
                                     | (2U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+61,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0xcU)))));
            tracep->chgSData(oldp+62,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
            tracep->chgSData(oldp+63,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
            tracep->chgIData(oldp+64,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
            tracep->chgIData(oldp+65,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
            tracep->chgIData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
            __Vtemp8[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
            __Vtemp8[1U] = ((0xfff00000U & ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                   >> 0x33U))))) 
                                            << 0x14U)) 
                            | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                       >> 0x20U)));
            __Vtemp8[2U] = (3U & ((- (IData)((1U & (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                            >> 0x33U))))) 
                                  >> 0xcU));
            VL_EXTEND_WQ(66,34, __Vtemp9, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
            VL_SHIFTL_WWI(66,66,6, __Vtemp10, __Vtemp9, 0x20U);
            VL_ADD_W(3, __Vtemp11, __Vtemp8, __Vtemp10);
            __Vtemp12[0U] = __Vtemp11[0U];
            __Vtemp12[1U] = __Vtemp11[1U];
            __Vtemp12[2U] = (3U & __Vtemp11[2U]);
            tracep->chgWData(oldp+68,(__Vtemp12),66);
            tracep->chgBit(oldp+71,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
            tracep->chgQData(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
            tracep->chgWData(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
            tracep->chgBit(oldp+78,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
            tracep->chgCData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
            tracep->chgCData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
            tracep->chgBit(oldp+83,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
            tracep->chgBit(oldp+84,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
            tracep->chgBit(oldp+86,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
            tracep->chgIData(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
            tracep->chgBit(oldp+89,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
            tracep->chgQData(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
            tracep->chgQData(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
            tracep->chgIData(oldp+94,(((1U & (IData)(
                                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                      >> 0x20U)))
                                        ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                        : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
            tracep->chgIData(oldp+95,(((0xfffffffeU 
                                        & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                           << 1U)) 
                                       | (1U & (~ (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                           >> 0x20U)))))),32);
            tracep->chgIData(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
            tracep->chgBit(oldp+97,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
            tracep->chgBit(oldp+98,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
            tracep->chgBit(oldp+99,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
            tracep->chgBit(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
            tracep->chgCData(oldp+110,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+111,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                                      & ((0x3a0U == 
                                          (0xffcU & 
                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x14U))) 
                                         | (0x3b0U 
                                            == (0xff0U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x14U)))))));
            tracep->chgBit(oldp+112,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                        & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                                       & (3U <= (0x1fU 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U)))) 
                                      & (((0xb00U == 
                                           (0xf60U 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x14U))) 
                                          | ((0xc00U 
                                              == (0xf60U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0x14U))) 
                                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction)))) 
                                         | (0x320U 
                                            == (0xfe0U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x14U)))))));
            tracep->chgBit(oldp+113,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                            | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
            tracep->chgQData(oldp+115,(((0U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x1aU)))
                                         ? 0x4e4f4e4520ULL
                                         : ((1U == 
                                             (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x1aU)))
                                             ? 0x5852455420ULL
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                     >> 0x1aU)))
                                                 ? 0x4543414c4cULL
                                                 : 0x3f3f3f3f3fULL)))),40);
            tracep->chgWData(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
            tracep->chgQData(oldp+120,(((0U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x12U)))
                                         ? 0x584f525f31ULL
                                         : ((1U == 
                                             (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x12U)))
                                             ? 0x4f525f3120ULL
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                     >> 0x12U)))
                                                 ? 0x414e445f31ULL
                                                 : 0x3f3f3f3f3fULL)))),40);
            tracep->chgIData(oldp+122,(((0x200U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                         ? ((0x100U 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                             ? 0x504320U
                                             : 0x494d53U)
                                         : ((0x100U 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                             ? 0x494d49U
                                             : 0x525320U))),24);
        }
    }
}

void Vsim::traceChgSub5(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 703);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(((0U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 6U)))
                                       ? 0x4144445f53554220ULL
                                       : ((1U == (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                     >> 6U)))
                                           ? 0x534c545f534c5455ULL
                                           : ((2U == 
                                               (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 6U)))
                                               ? 0x4249545749534520ULL
                                               : 0x3f3f3f3f3f3f3f3fULL)))),64);
            tracep->chgWData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
            tracep->chgQData(oldp+5,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                       ? 0x4e4f4e4520ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                           ? 0x5852455420ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                               ? 0x4543414c4cULL
                                               : 0x3f3f3f3f3fULL)))),40);
            tracep->chgQData(oldp+7,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                       ? 0x4e4f4e4520ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                           ? 0x5852455420ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                               ? 0x4543414c4cULL
                                               : 0x3f3f3f3f3fULL)))),40);
            tracep->chgQData(oldp+9,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                       ? 0x4e4f4e4520ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                           ? 0x5852455420ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                               ? 0x4543414c4cULL
                                               : 0x3f3f3f3f3fULL)))),40);
            tracep->chgIData(oldp+11,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                        ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                            ? 0x4a414c52U
                                            : 0x4a414c20U)
                                        : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                            ? 0x42202020U
                                            : 0x494e4320U))),32);
            tracep->chgWData(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
            tracep->chgWData(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
            tracep->chgIData(oldp+18,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                        ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                            ? 0x504320U
                                            : 0x494d53U)
                                        : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                            ? 0x494d49U
                                            : 0x525320U))),24);
            tracep->chgWData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
            tracep->chgQData(oldp+22,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                        ? 0x4144445f53554220ULL
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                            ? 0x534c545f534c5455ULL
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                                ? 0x4249545749534520ULL
                                                : 0x3f3f3f3f3f3f3f3fULL)))),64);
            tracep->chgQData(oldp+24,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                        ? 0x584f525f31ULL
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                            ? 0x4f525f3120ULL
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                                ? 0x414e445f31ULL
                                                : 0x3f3f3f3f3fULL)))),40);
            tracep->chgIData(oldp+26,(((0x1000000U 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                        ? ((0x800000U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                            ? 0x4a414c52U
                                            : 0x4a414c20U)
                                        : ((0x800000U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                            ? 0x42202020U
                                            : 0x494e4320U))),32);
            tracep->chgWData(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
            tracep->chgWData(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
            tracep->chgWData(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
            tracep->chgIData(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
            tracep->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
            tracep->chgCData(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
            tracep->chgBit(oldp+42,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                              >> 7U)))));
            tracep->chgBit(oldp+43,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
            tracep->chgBit(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
            tracep->chgBit(oldp+46,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
            tracep->chgCData(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
            tracep->chgBit(oldp+49,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                           | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                                 >> 7U))))));
            tracep->chgCData(oldp+50,((0x7fU & ((0x80U 
                                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                                 ? 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 5U)
                                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                           >> 7U))));
            tracep->chgIData(oldp+52,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 0xcU))),20);
            tracep->chgSData(oldp+53,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                  >> 2U)) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
            tracep->chgBit(oldp+54,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
            tracep->chgBit(oldp+55,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
            tracep->chgBit(oldp+56,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                           >> 1U))));
            tracep->chgIData(oldp+57,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                   >> 2U))),20);
            tracep->chgBit(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
            tracep->chgCData(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
            tracep->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
            tracep->chgCData(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
            tracep->chgIData(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
            tracep->chgBit(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
            tracep->chgCData(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
            tracep->chgBit(oldp+78,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
            tracep->chgIData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
            tracep->chgBit(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
            tracep->chgSData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
            tracep->chgBit(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
            tracep->chgSData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
            tracep->chgIData(oldp+86,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
            tracep->chgCData(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
            tracep->chgBit(oldp+88,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
            tracep->chgBit(oldp+89,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                           >> 1U))));
            tracep->chgIData(oldp+90,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                   >> 2U))),20);
            tracep->chgIData(oldp+91,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                        << 0x18U) | 
                                       (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                         << 0x10U) 
                                        | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
            tracep->chgBit(oldp+92,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
            tracep->chgBit(oldp+93,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
            tracep->chgBit(oldp+96,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN))));
            tracep->chgCData(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
            tracep->chgBit(oldp+98,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                      & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                         == (0x3ffU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                                >> 2U)))) 
                                     & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
            tracep->chgCData(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
            tracep->chgCData(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
            tracep->chgBit(oldp+102,((((0xfffffU & 
                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                         >> 0xcU)) 
                                       == (0xfffffU 
                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                              >> 2U))) 
                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
            tracep->chgBit(oldp+105,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                                      | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                          & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                             == (0x3ffU 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                    >> 2U)))) 
                                         & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
            tracep->chgCData(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
            tracep->chgBit(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l829));
            tracep->chgIData(oldp+110,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
            tracep->chgBit(oldp+111,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
            tracep->chgIData(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
            tracep->chgBit(oldp+122,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
            tracep->chgBit(oldp+126,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
            tracep->chgCData(oldp+130,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
            tracep->chgBit(oldp+131,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                               >> 7U)))));
            tracep->chgBit(oldp+132,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                      & (0U != (0x1fU 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU))))));
        }
    }
}

void Vsim::traceChgSub6(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 836);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
            tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
            tracep->chgBit(oldp+3,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                          | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
            tracep->chgBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
            tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                     ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                     : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid))));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1009));
            tracep->chgBit(oldp+7,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)))));
            tracep->chgBit(oldp+8,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
            tracep->chgBit(oldp+9,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1072));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
            tracep->chgCData(oldp+12,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                             + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
            tracep->chgBit(oldp+14,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1097));
            tracep->chgBit(oldp+20,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
            tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
            tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
        }
        tracep->chgCData(oldp+24,(vlTOPp->serial_sink_data),8);
        tracep->chgBit(oldp+25,(vlTOPp->serial_sink_ready));
        tracep->chgBit(oldp+26,(vlTOPp->serial_sink_valid));
        tracep->chgCData(oldp+27,(vlTOPp->serial_source_data),8);
        tracep->chgBit(oldp+28,(vlTOPp->serial_source_ready));
        tracep->chgBit(oldp+29,(vlTOPp->serial_source_valid));
        tracep->chgBit(oldp+30,(vlTOPp->sim_trace));
        tracep->chgBit(oldp+31,(vlTOPp->sys_clk));
        tracep->chgSData(oldp+32,(vlTOPp->serial_sink_data),10);
        tracep->chgBit(oldp+33,(((IData)(vlTOPp->serial_sink_valid) 
                                 & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
        tracep->chgIData(oldp+36,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
        tracep->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
        tracep->chgBit(oldp+41,((1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                       >> 0x1fU))));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
        tracep->chgCData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
        tracep->chgIData(oldp+45,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
        tracep->chgCData(oldp+46,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
        tracep->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
        tracep->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
        tracep->chgIData(oldp+49,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
        tracep->chgIData(oldp+50,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
        tracep->chgIData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
        tracep->chgIData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
        tracep->chgIData(oldp+53,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
        tracep->chgIData(oldp+54,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
        tracep->chgIData(oldp+57,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
        tracep->chgIData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
        tracep->chgIData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
        tracep->chgIData(oldp+60,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
        tracep->chgIData(oldp+61,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
        tracep->chgIData(oldp+62,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
        tracep->chgIData(oldp+63,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
        tracep->chgIData(oldp+64,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
        tracep->chgIData(oldp+65,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
        tracep->chgIData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
        tracep->chgIData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
        tracep->chgIData(oldp+68,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
        tracep->chgIData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
        tracep->chgIData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
        tracep->chgIData(oldp+71,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
        tracep->chgIData(oldp+72,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
        tracep->chgIData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
        tracep->chgIData(oldp+74,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
        tracep->chgIData(oldp+75,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
        tracep->chgIData(oldp+76,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
        tracep->chgIData(oldp+77,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
        tracep->chgIData(oldp+78,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
        tracep->chgIData(oldp+79,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
        tracep->chgIData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
        tracep->chgBit(oldp+81,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                 & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                 >> 2U)) 
                                    == (0xfffffU & 
                                        (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                         >> 0xcU))))));
    }
}

void Vsim::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
