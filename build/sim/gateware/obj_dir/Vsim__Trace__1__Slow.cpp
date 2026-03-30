// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceFullSub5(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullWData(oldp+705,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        tracep->fullQData(oldp+708,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                      ? 0x4e4f4e4520ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                          ? 0x5852455420ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                              ? 0x4543414c4cULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullQData(oldp+710,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                      ? 0x4e4f4e4520ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                          ? 0x5852455420ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                              ? 0x4543414c4cULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullQData(oldp+712,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                      ? 0x4e4f4e4520ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                          ? 0x5852455420ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                              ? 0x4543414c4cULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+714,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? 0x4a414c52U
                                          : 0x4a414c20U)
                                      : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? 0x42202020U
                                          : 0x494e4320U))),32);
        tracep->fullWData(oldp+715,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        tracep->fullWData(oldp+718,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        tracep->fullIData(oldp+721,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                      ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                          ? 0x504320U
                                          : 0x494d53U)
                                      : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                          ? 0x494d49U
                                          : 0x525320U))),24);
        tracep->fullWData(oldp+722,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
        tracep->fullQData(oldp+725,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                      ? 0x4144445f53554220ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                          ? 0x534c545f534c5455ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                              ? 0x4249545749534520ULL
                                              : 0x3f3f3f3f3f3f3f3fULL)))),64);
        tracep->fullQData(oldp+727,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? 0x584f525f31ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? 0x4f525f3120ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? 0x414e445f31ULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+729,(((0x1000000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                      ? ((0x800000U 
                                          & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                          ? 0x4a414c52U
                                          : 0x4a414c20U)
                                      : ((0x800000U 
                                          & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                          ? 0x42202020U
                                          : 0x494e4320U))),32);
        tracep->fullWData(oldp+730,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
        tracep->fullWData(oldp+733,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        tracep->fullWData(oldp+736,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        tracep->fullBit(oldp+739,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
        tracep->fullBit(oldp+740,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
        tracep->fullIData(oldp+741,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
        tracep->fullBit(oldp+742,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
        tracep->fullBit(oldp+743,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
        tracep->fullCData(oldp+744,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
        tracep->fullBit(oldp+745,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                            >> 7U)))));
        tracep->fullBit(oldp+746,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
        tracep->fullBit(oldp+747,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
        tracep->fullBit(oldp+748,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
        tracep->fullBit(oldp+749,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
        tracep->fullBit(oldp+750,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
        tracep->fullCData(oldp+751,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
        tracep->fullBit(oldp+752,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                         | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                               >> 7U))))));
        tracep->fullCData(oldp+753,((0x7fU & ((0x80U 
                                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                               ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                  >> 5U)
                                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
        tracep->fullBit(oldp+754,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                         >> 7U))));
        tracep->fullIData(oldp+755,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 0xcU))),20);
        tracep->fullSData(oldp+756,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                >> 2U)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
        tracep->fullBit(oldp+757,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
        tracep->fullBit(oldp+758,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
        tracep->fullBit(oldp+759,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                         >> 1U))));
        tracep->fullIData(oldp+760,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                 >> 2U))),20);
        tracep->fullBit(oldp+761,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
        tracep->fullBit(oldp+762,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
        tracep->fullBit(oldp+763,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
        tracep->fullBit(oldp+764,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
        tracep->fullBit(oldp+765,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
        tracep->fullBit(oldp+766,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
        tracep->fullBit(oldp+767,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
        tracep->fullBit(oldp+768,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
        tracep->fullBit(oldp+769,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
        tracep->fullBit(oldp+770,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
        tracep->fullCData(oldp+771,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
        tracep->fullBit(oldp+772,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
        tracep->fullBit(oldp+773,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
        tracep->fullCData(oldp+774,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
        tracep->fullBit(oldp+775,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
        tracep->fullBit(oldp+776,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
        tracep->fullIData(oldp+777,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
        tracep->fullBit(oldp+778,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
        tracep->fullBit(oldp+779,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
        tracep->fullCData(oldp+780,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
        tracep->fullBit(oldp+781,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
        tracep->fullBit(oldp+782,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
        tracep->fullIData(oldp+783,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
        tracep->fullBit(oldp+784,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
        tracep->fullSData(oldp+785,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
        tracep->fullBit(oldp+786,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
        tracep->fullBit(oldp+787,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
        tracep->fullSData(oldp+788,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
        tracep->fullIData(oldp+789,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
        tracep->fullCData(oldp+790,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
        tracep->fullBit(oldp+791,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        tracep->fullBit(oldp+792,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                         >> 1U))));
        tracep->fullIData(oldp+793,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                 >> 2U))),20);
        tracep->fullIData(oldp+794,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                      << 0x18U) | (
                                                   ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                       << 8U) 
                                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
        tracep->fullBit(oldp+795,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
        tracep->fullBit(oldp+796,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
        tracep->fullBit(oldp+797,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667));
        tracep->fullBit(oldp+798,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
        tracep->fullBit(oldp+799,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN))));
        tracep->fullCData(oldp+800,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
        tracep->fullBit(oldp+801,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                       == (0x3ffU & 
                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                            >> 2U)))) 
                                   & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
        tracep->fullCData(oldp+802,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
        tracep->fullBit(oldp+803,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
        tracep->fullCData(oldp+804,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
        tracep->fullBit(oldp+805,((((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                 >> 0xcU)) 
                                    == (0xfffffU & 
                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                         >> 2U))) & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        tracep->fullBit(oldp+806,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
        tracep->fullBit(oldp+807,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
        tracep->fullBit(oldp+808,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                                   | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                        & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                       & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                          == (0x3ffU 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                 >> 2U)))) 
                                      & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
        tracep->fullCData(oldp+809,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
        tracep->fullBit(oldp+810,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
        tracep->fullBit(oldp+811,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
        tracep->fullBit(oldp+812,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l829));
        tracep->fullIData(oldp+813,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
        tracep->fullBit(oldp+814,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
        tracep->fullBit(oldp+815,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
        tracep->fullBit(oldp+816,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
        tracep->fullBit(oldp+817,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
        tracep->fullBit(oldp+818,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
        tracep->fullBit(oldp+819,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
        tracep->fullBit(oldp+820,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
        tracep->fullBit(oldp+821,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
        tracep->fullBit(oldp+822,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
        tracep->fullIData(oldp+823,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
        tracep->fullIData(oldp+824,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
        tracep->fullBit(oldp+825,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
        tracep->fullBit(oldp+826,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
        tracep->fullBit(oldp+827,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
        tracep->fullBit(oldp+828,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
        tracep->fullBit(oldp+829,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        tracep->fullBit(oldp+830,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        tracep->fullBit(oldp+831,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
        tracep->fullBit(oldp+832,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
        tracep->fullCData(oldp+833,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
        tracep->fullBit(oldp+834,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                            >> 7U)))));
        tracep->fullBit(oldp+835,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                   & (0U != (0x1fU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xfU))))));
        tracep->fullBit(oldp+836,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
        tracep->fullBit(oldp+837,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
        tracep->fullBit(oldp+838,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
        tracep->fullBit(oldp+839,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                          & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                         | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
        tracep->fullBit(oldp+840,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
        tracep->fullBit(oldp+841,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                    : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid))));
    }
}

void Vsim::traceFullSub6(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+842,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1009));
        tracep->fullBit(oldp+843,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)))));
        tracep->fullBit(oldp+844,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
        tracep->fullBit(oldp+845,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
        tracep->fullBit(oldp+846,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1072));
        tracep->fullBit(oldp+847,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
        tracep->fullCData(oldp+848,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                           + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
        tracep->fullCData(oldp+849,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
        tracep->fullBit(oldp+850,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
        tracep->fullBit(oldp+851,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
        tracep->fullBit(oldp+852,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
        tracep->fullBit(oldp+853,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
        tracep->fullBit(oldp+854,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
        tracep->fullBit(oldp+855,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1097));
        tracep->fullBit(oldp+856,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
        tracep->fullBit(oldp+857,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
        tracep->fullBit(oldp+858,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
        tracep->fullBit(oldp+859,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
        tracep->fullCData(oldp+860,(vlTOPp->serial_sink_data),8);
        tracep->fullBit(oldp+861,(vlTOPp->serial_sink_ready));
        tracep->fullBit(oldp+862,(vlTOPp->serial_sink_valid));
        tracep->fullCData(oldp+863,(vlTOPp->serial_source_data),8);
        tracep->fullBit(oldp+864,(vlTOPp->serial_source_ready));
        tracep->fullBit(oldp+865,(vlTOPp->serial_source_valid));
        tracep->fullBit(oldp+866,(vlTOPp->sim_trace));
        tracep->fullBit(oldp+867,(vlTOPp->sys_clk));
        tracep->fullSData(oldp+868,(vlTOPp->serial_sink_data),10);
        tracep->fullBit(oldp+869,(((IData)(vlTOPp->serial_sink_valid) 
                                   & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))));
        tracep->fullBit(oldp+870,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read));
        tracep->fullBit(oldp+871,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
        tracep->fullIData(oldp+872,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
        tracep->fullIData(oldp+873,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
        tracep->fullIData(oldp+874,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
        tracep->fullBit(oldp+875,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
        tracep->fullBit(oldp+876,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
        tracep->fullBit(oldp+877,((1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+878,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
        tracep->fullBit(oldp+879,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
        tracep->fullCData(oldp+880,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
        tracep->fullIData(oldp+881,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
        tracep->fullCData(oldp+882,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
        tracep->fullBit(oldp+883,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
        tracep->fullBit(oldp+884,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
        tracep->fullIData(oldp+885,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
        tracep->fullIData(oldp+886,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
        tracep->fullIData(oldp+887,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
        tracep->fullIData(oldp+888,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
        tracep->fullIData(oldp+889,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
        tracep->fullIData(oldp+890,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
        tracep->fullIData(oldp+891,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
        tracep->fullIData(oldp+892,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
        tracep->fullIData(oldp+893,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
        tracep->fullIData(oldp+894,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
        tracep->fullIData(oldp+895,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
        tracep->fullIData(oldp+896,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
        tracep->fullIData(oldp+897,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
        tracep->fullIData(oldp+898,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
        tracep->fullIData(oldp+899,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
        tracep->fullIData(oldp+900,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
        tracep->fullIData(oldp+901,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
        tracep->fullIData(oldp+902,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
        tracep->fullIData(oldp+903,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
        tracep->fullIData(oldp+904,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
        tracep->fullIData(oldp+905,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
        tracep->fullIData(oldp+906,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
        tracep->fullIData(oldp+907,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
        tracep->fullIData(oldp+908,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
        tracep->fullIData(oldp+909,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
        tracep->fullIData(oldp+910,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
        tracep->fullIData(oldp+911,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
        tracep->fullIData(oldp+912,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
        tracep->fullIData(oldp+913,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
        tracep->fullIData(oldp+914,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
        tracep->fullIData(oldp+915,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
        tracep->fullIData(oldp+916,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
        tracep->fullBit(oldp+917,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                   & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                   >> 2U)) 
                                      == (0xfffffU 
                                          & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                             >> 0xcU))))));
        tracep->fullBit(oldp+918,(1U));
        tracep->fullBit(oldp+919,(0U));
        tracep->fullCData(oldp+920,(0U),2);
        tracep->fullIData(oldp+921,(0U),32);
        tracep->fullCData(oldp+922,(0xfU),4);
        tracep->fullCData(oldp+923,(1U),2);
        tracep->fullCData(oldp+924,(2U),2);
        tracep->fullCData(oldp+925,(3U),2);
        tracep->fullBit(oldp+926,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved));
        tracep->fullBit(oldp+927,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SW));
        tracep->fullBit(oldp+928,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SR));
        tracep->fullBit(oldp+929,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SO));
        tracep->fullBit(oldp+930,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SI));
        tracep->fullBit(oldp+931,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PW));
        tracep->fullBit(oldp+932,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PR));
        tracep->fullBit(oldp+933,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PO));
        tracep->fullBit(oldp+934,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PI));
        tracep->fullCData(oldp+935,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_FM),4);
        tracep->fullCData(oldp+936,(5U),3);
        tracep->fullBit(oldp+937,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk));
        tracep->fullBit(oldp+938,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writesPending));
        tracep->fullBit(oldp+939,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        tracep->fullBit(oldp+940,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBus_rsp_payload_last));
        tracep->fullBit(oldp+941,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        tracep->fullCData(oldp+942,(2U),4);
        tracep->fullCData(oldp+943,(0U),4);
        tracep->fullBit(oldp+944,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error));
        tracep->fullBit(oldp+945,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc));
        tracep->fullIData(oldp+946,(0x42U),26);
        tracep->fullCData(oldp+947,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
    }
}
