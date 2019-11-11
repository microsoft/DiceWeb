#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// COLOR                    1   xyzw        1     NONE   float   xyz 
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[32]
// Embedded Data:
//  0x00000020 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x0000001b - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.xyz
dcl_output o0.xyzw
mad o0.xyz, v1.xyzx, v0.wwww, v0.xyzx
mov o0.w, v0.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[32], bundle is:[143] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneBasicEffect_PSBasicVertexLightingNoFog.pdb
// Shader Semantic Hash      : 0xb7f55ff3af9f3a91
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 0, channelMask 15, param0, paramSlot0, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 1, channelMask  7, param1, paramSlot1, DefaultVal={0,0,0,0}

codeLenInByte        = 92 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 0;
extUserElementCount  = 0;
NumVgprs             = 8;
NumSgprs             = 5;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000000
; constBufUsage           = 0x00000000

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000002
SPIC:NUM_INTERP             = 2
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0x48, dwords=0x12)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v3, off, off, off done vm         // 000000000008: F8001801 00000003
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v3, v4, off, off done vm          // 000000000008: F8001803 00000403
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v3, v2, off, off done vm          // 000000000008: F8001803 00000203
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v3, v4                       // 000000000000: 5E000903
  v_cvt_pkrtz_f16_f32  v1, v5, v2                       // 000000000004: 5E020505
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v3, v4                      // 000000000000: 5C000903
  v_cvt_pknorm_u16_f32  v1, v5, v2                      // 000000000004: 5C020505
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v3, v4                      // 000000000000: 5A000903
  v_cvt_pknorm_i16_f32  v1, v5, v2                      // 000000000004: 5A020505
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v3, v4                          // 000000000000: 60000903
  v_cvt_pk_u16_u32  v1, v5, v2                          // 000000000004: 60020505
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v3, v4                          // 000000000000: 62000903
  v_cvt_pk_i16_i32  v1, v5, v2                          // 000000000004: 62020505
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v3, v4, v5, v2 done vm            // 000000000008: F800180F 02050403
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b32     m0, s2                                  // 000000000000: BEFC0302
  v_interp_p1_f32  v2, v0, attr0.w                      // 000000000004: C8080300
  v_interp_p2_f32  v2, v1, attr0.w                      // 000000000008: C8090301
  v_interp_p1_f32  v3, v0, attr0.x                      // 00000000000C: C80C0000
  v_interp_p2_f32  v3, v1, attr0.x                      // 000000000010: C80D0001
  v_interp_p1_f32  v4, v0, attr0.y                      // 000000000014: C8100100
  v_interp_p2_f32  v4, v1, attr0.y                      // 000000000018: C8110101
  v_interp_p1_f32  v5, v0, attr0.z                      // 00000000001C: C8140200
  v_interp_p2_f32  v5, v1, attr0.z                      // 000000000020: C8150201
  v_interp_p1_f32  v6, v0, attr1.x                      // 000000000024: C8180400
  v_interp_p2_f32  v6, v1, attr1.x                      // 000000000028: C8190401
  v_interp_p1_f32  v7, v0, attr1.y                      // 00000000002C: C81C0500
  v_interp_p2_f32  v7, v1, attr1.y                      // 000000000030: C81D0501
  v_interp_p1_f32  v0, v0, attr1.z                      // 000000000034: C8000600
  v_interp_p2_f32  v0, v1, attr1.z                      // 000000000038: C8010601
  v_mac_f32     v3, v6, v2                              // 00000000003C: 3E060506
  v_mac_f32     v4, v7, v2                              // 000000000040: 3E080507
  v_mac_f32     v5, v0, v2                              // 000000000044: 3E0A0500
  v_cvt_pkrtz_f16_f32  v0, v3, v4                       // 000000000048: 5E000903
  v_cvt_pkrtz_f16_f32  v1, v5, v2                       // 00000000004C: 5E020505
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000050: F8001C0F 00000100
  s_endpgm                                              // 000000000058: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   8
//  NumSRegs:                   5
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   83
//  CycleSimNWaves:             83
//  Code Size:                  92
//Assembler Counts:
//  num_32bit_ops                     : 21
//  num_64bit_ops                     : 1
//  num_alu                           : 19
//  num_fc                            : 2
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 0
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 1
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 1
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 0
//  num_inst_vop2                     : 5
//  num_inst_vop3                     : 3
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 14
//  constant_literal_operands         : 0
//  num_tex                           : 1
//  num_vmem_group                    : 0
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 8
// m_uNumSRegs                       : 5
// m_uSCCodeSize                     : 92
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 83
// m_uCycleSimNWaves                 : 83

// Assembler Counts:
// num_32bit_ops                     : 21
// num_64bit_ops                     : 1
// num_alu                           : 19
// num_fc                            : 2
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 0
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 1
// num_inst_sopc                     : 0
// num_inst_sop1                     : 1
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 0
// num_inst_vop2                     : 5
// num_inst_vop3                     : 3
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 14
// num_inst_smem                     : 0
// constant_literal_operands         : 0
// num_tex                           : 1
// num_vmem_group                    : 0
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 0
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE BasicEffect_PSBasicVertexLightingNoFog[] =
{
     68,  88,  66,  67,  23, 235, 
    160, 201, 106,  56,  80,   8, 
    104,  91, 183,  36, 128,  53, 
    162, 133,   1,   0,   0,   0, 
      3,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    124,   0,   0,   0, 176,   0, 
      0,   0, 124,   3,   0,   0, 
    140,   3,   0,   0,  73,  83, 
     71,  78,  64,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0,  56,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,   7, 
      0,   0,  67,  79,  76,  79, 
     82,   0, 171, 171,  79,  83, 
     71,  78,  44,   0,   0,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  83,  86,  95,  84, 
     97, 114, 103, 101, 116,   0, 
    171, 171,  83,  72,  69,  88, 
    196,   2,   0,   0,  80,   0, 
      0,   0, 177,   0,   0,   0, 
     53,  16,   0,   0,   5,   0, 
      0,   0,  32,   0,   0,   0, 
     80,   0,   0,   0,  27,   0, 
      0,   0, 106,   8,   0,   1, 
     98,  16,   0,   3, 242,  16, 
     16,   0,   0,   0,   0,   0, 
     98,  16,   0,   3, 114,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,   9, 114,  32, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   1,   0, 
      0,   0, 246,  31,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   5, 130,  32, 
     16,   0,   0,   0,   0,   0, 
     58,  16,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     53,  16,   0,   0, 145,   0, 
      0,   0,  23,   0,   1,   0, 
     41,  84,  15,   0, 120,   1, 
    237, 151,  61, 111, 211,  64, 
     24, 199, 159, 179, 227, 144, 
     64, 218, 148, 151,  66, 144, 
    138, 196, 192, 192,  82,  62, 
     64, 133,  34,  66, 121,  25, 
    138,   0, 145,   8,  85, 213, 
    169, 109,  94, 220, 212,  40, 
    173, 173, 216,  67,   7, 132, 
     64,  98,  96, 132, 173,   3, 
     18,  75, 119,  70,  22,  68, 
     25, 111, 128,  15,   0,  76, 
     72, 124,   3,  64,  48,  32, 
    193, 243, 119, 238, 132, 105, 
     18,  38,  75,  84, 200, 127, 
    233, 119, 143, 255, 190, 243, 
    227,  39, 119, 142, 116, 215, 
     40,  83, 172, 119, 223, 222, 
    127,  66, 252, 112, 231, 238, 
    199,  30,  71, 135,  17,  58, 
     66, 219,  19, 104, 137, 190, 
    232, 120,  22,  13,   6,  88, 
     68,   5,  14,  24,  39, 153, 
     11,  12, 250,  12,  68, 143, 
    106, 111, 223, 108, 215, 112, 
    101,  51,  69, 166, 174, 153, 
    102, 144, 226,  40, 195, 105, 
    226, 235, 189,  50, 247,  70, 
    245, 225, 157, 200,   9,  77, 
    162, 209,  26,  26, 219,  65, 
     51,  90, 199,  25, 212,  63, 
     78, 168, 205,   8, 121,  81, 
     39, 132, 119, 255, 107,  13, 
    253,  78, 150,  89,  39,   8, 
    235, 145,  84, 114, 142, 198, 
    201, 172, 229, 107, 102, 156, 
    126, 178,  16,  71,   9, 243, 
    147, 167, 193,  71, 149,  23, 
     39, 254,  62, 185, 255, 169, 
    114, 104,  88, 152,  11,  48, 
    197, 232, 191,  89,  44, 211, 
    127,   4,  13, 221, 223,   5, 
    143,  43, 244,  29, 206, 120, 
    193, 126, 240, 109,  15, 188, 
     13,  31,  63, 152, 240, 156, 
    220,  46, 210, 178, 227,  88, 
    203, 229,  25, 126, 158,  63, 
      8, 246, 146, 189,  76, 248, 
     37, 246,  75,   9, 191, 202, 
    126,  53, 225,  91, 236,  91, 
    198, 155, 252, 229, 248, 125, 
    142, 165, 215, 250, 222, 126, 
     38, 171,  49,  29, 178,  26, 
    211,  33, 171,  49,  29, 178, 
     26, 211,  33, 171,  49,  29, 
    178,  26, 211,  33, 171,  49, 
     53, 200, 178, 127, 188,  34, 
    187, 160, 132,  93,  84,  68, 
     37,  37, 104,  66, 145, 152, 
     82,  66,  28,  86, 100,  29, 
     83, 194, 154,  86, 148, 171, 
     40, 145,  59, 169, 200, 153, 
     81, 194,  57, 165, 120, 131, 
    174,  68,  94, 168, 188, 147, 
    175,  30, 112,  10,  85, 114, 
     14,  86, 121,  31, 248, 199, 
     62, 146, 232, 193, 238,  25, 
    125,  96,  40, 233,  88,  97, 
    112, 126, 203, 113,   2, 232, 
    201, 220, 179, 231, 159,  87, 
    190, 190, 192,  53,  36, 245, 
    184, 243,  58, 158, 102,  74, 
    204, 111, 237, 160,  25, 210, 
     67,  61,  62, 210,  17, 251, 
    101, 108, 117,  39, 205,  41, 
     75, 223, 223, 209, 241, 169, 
    142,  56,  90,  28,  98, 246, 
    214, 241,  82, 247,   7,  12, 
     42, 157, 159, 147, 183, 220, 
    192,  15, 229,  98, 203, 223, 
    154, 173,  53, 174, 206, 214, 
    155,  27,  65, 207,  13, 229, 
    130,  23, 133, 242, 146, 215, 
    119, 219, 209,  98,  99,  65, 
    134, 253, 182, 172, 175,  55, 
     59, 110,  63, 148, 243, 254, 
     70, 224, 245, 220,  78, 252, 
    208, 141,  77, 247,  98,  51, 
    244, 218, 151, 215, 214, 120, 
    232, 202, 205, 122, 236, 110, 
    187, 253, 200, 221, 186, 230, 
    117, 215,  35, 111, 179, 123, 
    221, 191, 226, 119, 207,   5, 
    157,  22, 253,   2, 184, 253, 
    224, 174,   0,   0,  88,  72, 
     83,  72,   8,   0,   0,   0, 
    145,  58, 159, 175, 243,  95, 
    245, 183,  88,  80,  68,  80, 
    111,   0,   0,   0,  67,  58, 
     92,  82, 101, 112, 111, 115, 
     92,  88,  98, 111, 120,  45, 
     65,  84,  71,  45,  83,  97, 
    109, 112, 108, 101, 115,  92, 
     75, 105, 116, 115,  92,  68, 
    105, 114, 101,  99, 116,  88, 
     84,  75,  92, 115, 114,  99, 
     92,  83, 104,  97, 100, 101, 
    114, 115,  92,  67, 111, 109, 
    112, 105, 108, 101, 100,  92, 
     88,  98, 111, 120,  79, 110, 
    101,  66,  97, 115, 105,  99, 
     69, 102, 102, 101,  99, 116, 
     95,  80,  83,  66,  97, 115, 
    105,  99,  86, 101, 114, 116, 
    101, 120,  76, 105, 103, 104, 
    116, 105, 110, 103,  78, 111, 
     70, 111, 103,  46, 112, 100, 
     98
};