// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef _VSIM_SIM_H_
#define _VSIM_SIM_H_  // guard

#include "verilated_heavy.h"
#include "Vsim__Dpi.h"

//==========

class Vsim__Syms;
class Vsim_VerilatedVcd;
class Vsim_VexRiscv;


//----------

VL_MODULE(Vsim_sim) {
  public:
    // CELLS
    Vsim_VexRiscv* VexRiscv;
    
    // PORTS
    VL_IN8(serial_sink_data,7,0);
    VL_OUT8(serial_sink_ready,0,0);
    VL_IN8(serial_sink_valid,0,0);
    VL_OUT8(serial_source_data,7,0);
    VL_IN8(serial_source_ready,0,0);
    VL_OUT8(serial_source_valid,0,0);
    VL_OUT8(__PVT__sim_trace,0,0);
    VL_IN8(sys_clk,0,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__bus_errors_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank0_bus_errors_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank0_bus_errors_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank0_reset0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank0_reset0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank0_scratch0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank0_scratch0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_en0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_en0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_ev_enable0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_ev_enable0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_ev_pending_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_ev_pending_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_ev_status_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_ev_status_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_load0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_load0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_reload0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_reload0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_update_value0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_update_value0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_value_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank1_value_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_ev_enable0_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_ev_enable0_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_ev_pending_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_ev_pending_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_ev_status_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_ev_status_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_rxempty_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_rxempty_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_rxfull_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_rxfull_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_txempty_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_txempty_we;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_txfull_re;
        CData/*0:0*/ __PVT__csr_bankarray_csrbank2_txfull_we;
        CData/*0:0*/ __PVT__csr_bankarray_sel_r;
        CData/*0:0*/ __PVT__dbus_ack;
        CData/*0:0*/ __PVT__done;
        CData/*0:0*/ __PVT__error;
        CData/*0:0*/ __PVT__grant;
        CData/*0:0*/ __PVT__ibus_ack;
        CData/*0:0*/ __PVT__int_rst;
        CData/*0:0*/ __PVT__interface0_ack;
        CData/*0:0*/ __PVT__interface0_cyc;
        CData/*0:0*/ __PVT__interface0_ram_bus_ack;
        CData/*0:0*/ __PVT__interface0_ram_bus_cyc;
        CData/*0:0*/ __PVT__interface1_ram_bus_ack;
        CData/*0:0*/ __PVT__interface1_ram_bus_cyc;
        CData/*0:0*/ __PVT__interface1_re;
        CData/*0:0*/ __PVT__interface1_we;
        CData/*3:0*/ __PVT__master;
        CData/*0:0*/ __PVT__next_state;
        CData/*0:0*/ __PVT__ram_bus_ack;
        CData/*1:0*/ __PVT__request;
        CData/*0:0*/ __PVT__reset_re;
        CData/*1:0*/ __PVT__reset_storage;
        CData/*0:0*/ __PVT__scratch_re;
        CData/*3:0*/ __PVT__self2;
        CData/*0:0*/ __PVT__self3;
        CData/*0:0*/ __PVT__self4;
        CData/*0:0*/ __PVT__self5;
        CData/*2:0*/ __PVT__self6;
    };
    struct {
        CData/*1:0*/ __PVT__self7;
        CData/*0:0*/ __PVT__shared_ack;
        CData/*3:0*/ __PVT__slaves;
        CData/*0:0*/ __PVT__soc_rst;
        CData/*3:0*/ __PVT__sram0_we;
        CData/*3:0*/ __PVT__sram1_we;
        CData/*0:0*/ __PVT__state;
        CData/*0:0*/ __PVT__timer_en_re;
        CData/*0:0*/ __PVT__timer_en_storage;
        CData/*0:0*/ __PVT__timer_enable_re;
        CData/*0:0*/ __PVT__timer_enable_storage;
        CData/*0:0*/ __PVT__timer_load_re;
        CData/*0:0*/ __PVT__timer_pending_r;
        CData/*0:0*/ __PVT__timer_pending_re;
        CData/*0:0*/ __PVT__timer_reload_re;
        CData/*0:0*/ __PVT__timer_status_re;
        CData/*0:0*/ __PVT__timer_update_value_re;
        CData/*0:0*/ __PVT__timer_update_value_storage;
        CData/*0:0*/ __PVT__timer_value_re;
        CData/*0:0*/ __PVT__timer_zero_clear;
        CData/*0:0*/ __PVT__timer_zero_pending;
        CData/*0:0*/ __PVT__timer_zero_trigger_d;
        CData/*0:0*/ __PVT__uart_enable_re;
        CData/*1:0*/ __PVT__uart_enable_storage;
        CData/*1:0*/ __PVT__uart_pending_r;
        CData/*0:0*/ __PVT__uart_pending_re;
        CData/*1:0*/ __PVT__uart_pending_status;
        CData/*0:0*/ __PVT__uart_rx_clear;
        CData/*3:0*/ __PVT__uart_rx_fifo_consume;
        CData/*0:0*/ __PVT__uart_rx_fifo_do_read;
        CData/*0:0*/ __PVT__uart_rx_fifo_fifo_out_first;
        CData/*0:0*/ __PVT__uart_rx_fifo_fifo_out_last;
        CData/*7:0*/ __PVT__uart_rx_fifo_fifo_out_payload_data;
        CData/*4:0*/ __PVT__uart_rx_fifo_level0;
        CData/*3:0*/ __PVT__uart_rx_fifo_produce;
        CData/*0:0*/ __PVT__uart_rx_fifo_readable;
        CData/*0:0*/ __PVT__uart_rx_fifo_syncfifo_re;
        CData/*0:0*/ __PVT__uart_rx_fifo_syncfifo_writable;
        CData/*3:0*/ __PVT__uart_rx_fifo_wrport_adr;
        CData/*0:0*/ __PVT__uart_rxempty_re;
        CData/*0:0*/ __PVT__uart_rxfull_re;
        CData/*0:0*/ __PVT__uart_rxtx_re;
        CData/*0:0*/ __PVT__uart_rxtx_we;
        CData/*0:0*/ __PVT__uart_status_re;
        CData/*1:0*/ __PVT__uart_status_status;
        CData/*0:0*/ __PVT__uart_tx_clear;
        CData/*3:0*/ __PVT__uart_tx_fifo_consume;
        CData/*0:0*/ __PVT__uart_tx_fifo_do_read;
        CData/*0:0*/ __PVT__uart_tx_fifo_fifo_out_first;
        CData/*0:0*/ __PVT__uart_tx_fifo_fifo_out_last;
        CData/*7:0*/ __PVT__uart_tx_fifo_fifo_out_payload_data;
        CData/*4:0*/ __PVT__uart_tx_fifo_level0;
        CData/*3:0*/ __PVT__uart_tx_fifo_produce;
        CData/*0:0*/ __PVT__uart_tx_fifo_readable;
        CData/*0:0*/ __PVT__uart_tx_fifo_syncfifo_re;
        CData/*0:0*/ __PVT__uart_tx_fifo_syncfifo_writable;
        CData/*3:0*/ __PVT__uart_tx_fifo_wrport_adr;
        CData/*0:0*/ __PVT__uart_txempty_re;
        CData/*0:0*/ __PVT__uart_txfull_re;
        CData/*5:0*/ __PVT__mem_adr0;
        SData/*13:0*/ __PVT__interface1_adr;
        SData/*10:0*/ __PVT__sram_adr0;
        SData/*13:0*/ __PVT__main_ram_adr0;
        SData/*9:0*/ __PVT__storage_dat0;
    };
    struct {
        SData/*9:0*/ __PVT__storage_dat1;
        SData/*9:0*/ __PVT__storage_1_dat0;
        SData/*9:0*/ __PVT__storage_1_dat1;
        IData/*31:0*/ __PVT__bus_errors;
        IData/*19:0*/ __PVT__count;
        IData/*31:0*/ __PVT__csr_bankarray_interface0_bank_bus_dat_r;
        IData/*31:0*/ __PVT__csr_bankarray_interface1_bank_bus_dat_r;
        IData/*31:0*/ __PVT__csr_bankarray_interface2_bank_bus_dat_r;
        IData/*31:0*/ __PVT__csr_bankarray_sram_bus_dat_r;
        IData/*31:0*/ __PVT__interface0_dat_r;
        IData/*31:0*/ __PVT__interface1_dat_w;
        IData/*31:0*/ __PVT__interrupt;
        IData/*31:0*/ __PVT__scratch_storage;
        IData/*29:0*/ __PVT__self0;
        IData/*31:0*/ __PVT__self1;
        IData/*31:0*/ __PVT__shared_dat_r;
        IData/*31:0*/ __PVT__timer_load_storage;
        IData/*31:0*/ __PVT__timer_reload_storage;
        IData/*31:0*/ __PVT__timer_value;
        IData/*31:0*/ __PVT__timer_value_status;
        IData/*31:0*/ __PVT__rom_dat0;
        IData/*31:0*/ __PVT__mem_write_block__DOT__we_index;
        IData/*31:0*/ __PVT__mem_write_block_1__DOT__we_index_1;
        IData/*31:0*/ __PVT__rom[5950];
        IData/*31:0*/ __PVT__sram[2048];
        IData/*31:0*/ __PVT__main_ram[16384];
        CData/*7:0*/ __PVT__mem[37];
        SData/*9:0*/ __PVT__storage[16];
        SData/*9:0*/ __PVT__storage_1[16];
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__VexRiscv__reset;
    CData/*4:0*/ __Vdly__uart_rx_fifo_level0;
    CData/*3:0*/ __Vdly__uart_rx_fifo_consume;
    CData/*4:0*/ __Vdly__uart_tx_fifo_level0;
    CData/*0:0*/ __Vdly__interface0_ram_bus_ack;
    CData/*0:0*/ __Vdly__interface1_ram_bus_ack;
    CData/*3:0*/ __Vdly__uart_tx_fifo_consume;
    CData/*0:0*/ __Vdly__ram_bus_ack;
    CData/*0:0*/ __Vdlyvset__sram__v0;
    CData/*0:0*/ __Vdlyvset__sram__v1;
    CData/*0:0*/ __Vdlyvset__sram__v2;
    CData/*0:0*/ __Vdlyvset__sram__v3;
    CData/*0:0*/ __Vdlyvset__main_ram__v0;
    CData/*0:0*/ __Vdlyvset__main_ram__v1;
    CData/*0:0*/ __Vdlyvset__main_ram__v2;
    CData/*0:0*/ __Vdlyvset__main_ram__v3;
    CData/*3:0*/ __Vdlyvdim0__storage__v0;
    CData/*0:0*/ __Vdlyvset__storage__v0;
    CData/*3:0*/ __Vdlyvdim0__storage_1__v0;
    CData/*0:0*/ __Vdlyvset__storage_1__v0;
    SData/*9:0*/ __Vdlyvval__storage__v0;
    SData/*9:0*/ __Vdlyvval__storage_1__v0;
    IData/*31:0*/ __Vdly__bus_errors;
    IData/*31:0*/ __Vdly__timer_value;
    
    // INTERNAL VARIABLES
  private:
    Vsim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsim_sim);  ///< Copying not allowed
  public:
    Vsim_sim(const char* name = "TOP");
    ~Vsim_sim();
    
    // INTERNAL METHODS
    void __Vconfigure(Vsim__Syms* symsp, bool first);
    static void _combo__TOP__sim__16(Vsim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__sim__1(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__sim__10(Vsim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__sim__11(Vsim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__sim__12(Vsim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__sim__13(Vsim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__sim__14(Vsim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__sim__15(Vsim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__sim__8(Vsim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__sim__9(Vsim__Syms* __restrict vlSymsp);
    static void _settle__TOP__sim__2(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__sim__3(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__sim__4(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__sim__5(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
