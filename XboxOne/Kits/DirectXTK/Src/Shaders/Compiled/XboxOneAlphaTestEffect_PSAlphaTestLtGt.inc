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
// COLOR                    1   xyzw        1     NONE   float      w
// TEXCOORD                 0   xy          2     NONE   float   xy  
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
// First Precompiled Shader at offset:[106]
// Embedded Data:
//  0x0000006a - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x00000065 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[8], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.w
dcl_input_ps linear v2.xy
dcl_output o0.xyzw
dcl_temps 2
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v2.xyxx, t0.xyzw, s0
mul r0.xyzw, r0.xyzw, v0.xyzw
lt r1.x, r0.w, cb0[1].x
movc r1.x, r1.x, cb0[1].z, cb0[1].w
lt r1.x, r1.x, l(0.000000)
discard_nz r1.x
mad r1.xyz, cb0[2].xyzx, r0.wwww, -r0.xyzx
mad o0.xyz, v1.wwww, r1.xyzx, r0.xyzx
mov o0.w, r0.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[106], bundle is:[180] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneAlphaTestEffect_PSAlphaTestLtGt.pdb
// Shader Semantic Hash      : 0x448ff5da79153c61
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 0, channelMask 15, param0, paramSlot0, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 1, channelMask  8, param1, paramSlot1, DefaultVal={0,0,0,0}
;   [2] generic,  usageIdx 2, channelMask  3, param2, paramSlot2, DefaultVal={0,0,0,0}

codeLenInByte        = 216 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 3;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
;  extUserElements 1[2] = IMM_CONST_BUFFER 0, offset 0xc:15 dwords
NumVgprs             = 10;
NumSgprs             = 20;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000003
SPIC:NUM_INTERP             = 3
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000050
DB:Z_ORDER                  = 1
DB:KILL_ENABLE              = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0xC4, dwords=0x31)]
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
  exp           mrt0, v2, off, off, off done vm         // 000000000008: F8001801 00000002
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, off, off done vm          // 000000000008: F8001803 00000302
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v5, off, off done vm          // 000000000008: F8001803 00000502
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 000000000000: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 000000000004: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v2, v3                      // 000000000000: 5C000702
  v_cvt_pknorm_u16_f32  v1, v4, v5                      // 000000000004: 5C020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v2, v3                      // 000000000000: 5A000702
  v_cvt_pknorm_i16_f32  v1, v4, v5                      // 000000000004: 5A020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v2, v3                          // 000000000000: 60000702
  v_cvt_pk_u16_u32  v1, v4, v5                          // 000000000004: 60020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v2, v3                          // 000000000000: 62000702
  v_cvt_pk_i16_i32  v1, v4, v5                          // 000000000004: 62020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, v4, v5 done vm            // 000000000008: F800180F 05040302
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[16:17], exec                          // 000000000000: BE90047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_mov_b32     m0, s2                                  // 000000000008: BEFC0302
  s_load_dwordx16  s[0:15], s[0:1], 0x00                // 00000000000C: C1000100
  v_interp_p1_f32  v2, v0, attr2.x                      // 000000000010: C8080800
  v_interp_p2_f32  v2, v1, attr2.x                      // 000000000014: C8090801
  v_interp_p1_f32  v3, v0, attr2.y                      // 000000000018: C80C0900
  v_interp_p2_f32  v3, v1, attr2.y                      // 00000000001C: C80D0901
  s_waitcnt     lgkmcnt(0)                              // 000000000020: BF8C007F
  image_sample  v[2:5], v[2:3], s[0:7], s[8:11] dmask:0xf // 000000000024: F0800F00 00400202
  v_interp_p1_f32  v6, v0, attr0.x                      // 00000000002C: C8180000
  v_interp_p2_f32  v6, v1, attr0.x                      // 000000000030: C8190001
  v_interp_p1_f32  v7, v0, attr0.y                      // 000000000034: C81C0100
  v_interp_p2_f32  v7, v1, attr0.y                      // 000000000038: C81D0101
  v_interp_p1_f32  v8, v0, attr0.z                      // 00000000003C: C8200200
  v_interp_p2_f32  v8, v1, attr0.z                      // 000000000040: C8210201
  v_interp_p1_f32  v9, v0, attr0.w                      // 000000000044: C8240300
  v_interp_p2_f32  v9, v1, attr0.w                      // 000000000048: C8250301
  s_waitcnt     vmcnt(0)                                // 00000000004C: BF8C0F70
  v_mul_legacy_f32  v2, v2, v6                          // 000000000050: 0E040D02
  v_mul_legacy_f32  v3, v3, v7                          // 000000000054: 0E060F03
  v_mul_legacy_f32  v4, v4, v8                          // 000000000058: 0E081104
  v_mul_legacy_f32  v5, v5, v9                          // 00000000005C: 0E0A1305
  s_buffer_load_dwordx4  s[0:3], s[12:15], 0x04         // 000000000060: C2800D04
  s_waitcnt     lgkmcnt(0)                              // 000000000064: BF8C007F
  v_cmp_gt_f32  vcc, s0, v5                             // 000000000068: 7C080A00
  v_mov_b32     v6, s2                                  // 00000000006C: 7E0C0202
  v_mov_b32     v7, s3                                  // 000000000070: 7E0E0203
  v_cndmask_b32  v6, v7, v6, vcc                        // 000000000074: 000C0D07
  v_cmp_gt_f32  vcc, 0, v6                              // 000000000078: 7C080C80
  s_andn2_b64   s[16:17], s[16:17], vcc // wrscc        // 00000000007C: 8A906A10
  s_cbranch_scc0  label_0030                            // 000000000080: BF84000F
  s_and_b64     exec, exec, s[16:17] // wrscc           // 000000000084: 87FE107E
  s_wqm_b64     exec, exec // wrscc                     // 000000000088: BEFE0A7E
  s_buffer_load_dwordx4  s[0:3], s[12:15], 0x08         // 00000000008C: C2800D08
  s_waitcnt     lgkmcnt(0)                              // 000000000090: BF8C007F
  v_mad_legacy_f32  v6, s0, v5, -v2                     // 000000000094: D2800006 840A0A00
  v_mad_legacy_f32  v7, s1, v5, -v3                     // 00000000009C: D2800007 840E0A01
  v_mad_legacy_f32  v8, s2, v5, -v4                     // 0000000000A4: D2800008 84120A02
  v_interp_p1_f32  v0, v0, attr1.w                      // 0000000000AC: C8000700
  v_interp_p2_f32  v0, v1, attr1.w                      // 0000000000B0: C8010701
  v_mac_f32     v2, v0, v6                              // 0000000000B4: 3E040D00
  v_mac_f32     v3, v0, v7                              // 0000000000B8: 3E060F00
  v_mac_f32     v4, v0, v8                              // 0000000000BC: 3E081100
label_0030:
  s_mov_b64     exec, s[16:17]                          // 0000000000C0: BEFE0410
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 0000000000C4: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 0000000000C8: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 0000000000CC: F8001C0F 00000100
  s_endpgm                                              // 0000000000D4: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   10
//  NumSRegs:                   20
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   83
//  CycleSimNWaves:             83
//  Code Size:                  216
//Assembler Counts:
//  num_32bit_ops                     : 44
//  num_64bit_ops                     : 5
//  num_alu                           : 31
//  num_fc                            : 16
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 6
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 5
//  num_inst_sop2                     : 2
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 2
//  num_inst_vop2                     : 10
//  num_inst_vop3                     : 3
//  num_inst_vopc                     : 2
//  num_inst_vintrp                   : 14
//  constant_literal_operands         : 0
//  num_tex                           : 2
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 10
// m_uNumSRegs                       : 20
// m_uSCCodeSize                     : 216
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 83
// m_uCycleSimNWaves                 : 83

// Assembler Counts:
// num_32bit_ops                     : 44
// num_64bit_ops                     : 5
// num_alu                           : 31
// num_fc                            : 16
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 6
// num_inst_sopc                     : 0
// num_inst_sop1                     : 5
// num_inst_sop2                     : 2
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 2
// num_inst_vop2                     : 10
// num_inst_vop3                     : 3
// num_inst_vopc                     : 2
// num_inst_vintrp                   : 14
// num_inst_smem                     : 3
// constant_literal_operands         : 0
// num_tex                           : 2
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE AlphaTestEffect_PSAlphaTestLtGt[] =
{
     68,  88,  66,  67, 153, 157, 
     40, 195, 182, 127,  87, 100, 
      7,  33, 133, 145, 214,  89, 
     99, 137,   1,   0,   0,   0, 
    216,   5,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    156,   0,   0,   0, 208,   0, 
      0,   0,  88,   5,   0,   0, 
    104,   5,   0,   0,  73,  83, 
     71,  78,  96,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0,  80,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,   8, 
      0,   0,  86,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   3, 
      0,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88, 128,   4,   0,   0, 
     80,   0,   0,   0,  32,   1, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0, 106,   0, 
      0,   0,  80,   0,   0,   0, 
    101,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      0,   0,   0,   0,  98,  16, 
      0,   3, 130,  16,  16,   0, 
      1,   0,   0,   0,  98,  16, 
      0,   3,  50,  16,  16,   0, 
      2,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
     69,   0,   0, 139, 194,   0, 
      0, 128,  67,  85,  21,   0, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      2,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     49,   0,   0,   8,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  55,   0,   0,  11, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  58, 128, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  49,   0, 
      0,   7,  18,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  13,   0,   4,   3, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  11, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,  50,   0, 
      0,   9, 114,  32,  16,   0, 
      0,   0,   0,   0, 246,  31, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  53,  16, 
      0,   0, 182,   0,   0,   0, 
     23,   0,   1,   0,  41,  37, 
     16,   0, 120,   1, 237,  87, 
    207, 107,  19,  65,  20, 126, 
     51, 187,  77,  54, 219, 100, 
     55, 181,  85,  82, 168,  88, 
    177,   5,  15,  86,  16,  60, 
    137, 148, 254, 146,  30,  90, 
    176, 152,  30,  74,  89, 170, 
     73, 187, 161, 145, 214,  46, 
     77,  14,  10,  37,  70,   8, 
      8,  82, 176, 135,  30,  60, 
    139, 127,  71,  83,  61, 237, 
     65,  65,  60,  21, 111,  30, 
    188, 123,  17, 122,  40, 213, 
    247, 109, 102, 211,  88, 237, 
    109,  65, 193, 253, 224, 123, 
    111, 190, 221, 183, 111, 191, 
    204, 108,  96, 102,  56,  75, 
      1,  94, 143, 245, 126,  68, 
    254, 242, 149,  14, 119,   5, 
     81,  23, 143,  57,   5,  25, 
    120, 149,  65,  36, 218, 183, 
     16, 137, 174,  34, 160,  64, 
     18, 153, 156, 250, 152,   7, 
    204,  49,  38, 238, 133,  44, 
    149, 114,  19,  31, 222,  15, 
     78, 240, 144,  46,  48,  81, 
    155,  87, 188, 198,  68, 255, 
     75,  76, 216,  64,  59,  32, 
    204,  64,   2, 129, 129,  58, 
    126,  85,  27,  24, 163, 151, 
    198, 196,  24, 182,  48,   6, 
    160,  59, 123, 144, 139, 240, 
    103, 220,  96, 162, 207,  89, 
    128, 183, 176,  23, 178, 154, 
    174, 224, 247, 254, 109, 180, 
    124, 157,  68,  48,  92,  39, 
      0, 235, 209,   9, 204,  17, 
    106,   0,  15, 130,  17, 206, 
     89,  67, 105, 204,   5, 126, 
    219,  62, 243,  44, 252,  96, 
    132, 243,  16,  34, 212, 232, 
    151,  32, 155,  35, 103, 145, 
     35,  50,  56, 203,  43,  39, 
      5, 255,   1, 116,   4,   6, 
    230,   2, 223, 226,  28, 179, 
     53,  35,  45, 132, 247, 241, 
    237,  17, 213, 155, 224,  78, 
    142,  14, 161,  66, 205,  83, 
    119, 136, 103,  67, 173,  65, 
    163,  97, 167, 230,  63, 133, 
     76, 210, 146, 222,  45, 151, 
    236,   1, 126, 158,  23, 151, 
    181, 195, 218, 233, 208, 139, 
    172,  23,  59, 244,   3, 214, 
     15,  58, 116, 145, 117,  49, 
    212,  97, 127,  59, 120, 159, 
    222, 133, 181, 230, 139, 181, 
    127, 153, 177, 199, 104,  24, 
    123, 140, 134, 177, 199, 104, 
     24, 123, 140, 134, 177, 199, 
    104,  24, 123, 140, 134, 177, 
    199, 200,  72,  53, 125, 103, 
    175, 102,  30, 239,  73, 237, 
    104, 143, 247, 111, 111, 201, 
     48, 124,  97, 164, 124,  74, 
    165, 125, 145, 202, 248,  79, 
    105, 187,  73, 118, 253, 155, 
    148,  56, 153, 229, 124,  65, 
    253,  62, 137,   1,  95, 136, 
    139,  62, 201,  65,  95, 200, 
    203,  62, 105,  67, 190, 208, 
    134, 125, 207, 222, 110, 202, 
    140, 110, 105, 118, 194, 210, 
    123,  12, 171, 171, 215, 180, 
    244,  76, 253,  93, 208, 195, 
     52, 182, 164,  76, 215,  52, 
    105, 213, 146, 153,  52, 213, 
    211, 198,  86, 246, 225, 206, 
     11, 155,  26, 205,  90, 246, 
    248,  57,  60,  24, 170,  54, 
     65, 245,  79, 100, 154, 141, 
     36, 103,  97,  90,  13, 131, 
    179,  52, 207,  53,  40,  73, 
    190,  72,  10, 159,  50, 250, 
     40, 217, 137,  81, 234,  49, 
     70, 179,  58, 123,  63, 181, 
    135,  37, 122, 214, 236,  71, 
    110, 109, 128, 127, 133,  17, 
     20, 180,  17,  40,  93, 224, 
    152, 209,  70, 240,  24,  95, 
     75,  35,  43,  28, 169, 243, 
    205, 129, 202,  67, 204,  20, 
     83,   4, 187, 244, 224, 152, 
    194, 251, 242, 214, 105, 179, 
    112, 251, 252, 147, 207, 223, 
     95,  78,  97,  12, 220,  84, 
    155, 247,  62, 149,   7, 153, 
    157, 189, 137, 222,  32, 252, 
      6,  71, 213, 207, 170, 140, 
     35,  16, 246, 254,  86, 112, 
    154, 101,  40,  47,  91, 234, 
    126,  85, 101, 120, 233, 102, 
    158, 246, 177, 171, 238, 151, 
    153, 112,  58, 121, 203, 185, 
    231, 122,  27,  21, 103, 161, 
    184, 241, 120, 100, 124, 126, 
    122,  36,  95,  88, 247, 214, 
    220, 138,  51,  83, 174,  86, 
    156, 169, 242, 166, 187,  92, 
     93, 152, 159, 113,  42, 155, 
    203,  78, 126, 181, 176, 226, 
    110,  86, 156, 201, 141, 117, 
    175, 188, 230, 174,   4,  15, 
    221, 125, 228, 142, 175, 121, 
    171, 133, 121, 183,  82, 189, 
     83,  42, 113, 249, 253, 185, 
    124, 251, 202, 108, 117, 186, 
    122, 221,  91,  41, 210,  79, 
     99,  75,   1,  36,   0,   0, 
     88,  72,  83,  72,   8,   0, 
      0,   0,  97,  60,  21, 121, 
    218, 245, 143,  68,  88,  80, 
     68,  80, 104,   0,   0,   0, 
     67,  58,  92,  82, 101, 112, 
    111, 115,  92,  88,  98, 111, 
    120,  45,  65,  84,  71,  45, 
     83,  97, 109, 112, 108, 101, 
    115,  92,  75, 105, 116, 115, 
     92,  68, 105, 114, 101,  99, 
    116,  88,  84,  75,  92, 115, 
    114,  99,  92,  83, 104,  97, 
    100, 101, 114, 115,  92,  67, 
    111, 109, 112, 105, 108, 101, 
    100,  92,  88,  98, 111, 120, 
     79, 110, 101,  65, 108, 112, 
    104,  97,  84, 101, 115, 116, 
     69, 102, 102, 101,  99, 116, 
     95,  80,  83,  65, 108, 112, 
    104,  97,  84, 101, 115, 116, 
     76, 116,  71, 116,  46, 112, 
    100,  98
};