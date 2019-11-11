#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float       
// TEXCOORD                 0   xy          1     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
// SV_Target                1   xyzw        1   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[227]
// Embedded Data:
//  0x000000e3 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x000000de - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_output o1.xyzw
dcl_temps 3
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v1.xyxx, t0.xyzw, s0
dp3 r1.x, l(0.627404, 0.329282, 0.043314, 0.000000), r0.xyzx
dp3 r1.y, l(0.069097, 0.919540, 0.011361, 0.000000), r0.xyzx
dp3 r1.z, l(0.016392, 0.088013, 0.895595, 0.000000), r0.xyzx
mul r1.xyz, r1.xyzx, cb0[0].yyyy
mul r1.xyz, r1.xyzx, l(0.000100, 0.000100, 0.000100, 0.000000)
log r1.xyz, |r1.xyzx|
mul r1.xyz, r1.xyzx, l(0.159302, 0.159302, 0.159302, 0.000000)
exp r1.xyz, r1.xyzx
mad r2.xyz, r1.xyzx, l(18.851563, 18.851563, 18.851563, 0.000000), l(0.835938, 0.835938, 0.835938, 0.000000)
mad r1.xyz, r1.xyzx, l(18.687500, 18.687500, 18.687500, 0.000000), l(1.000000, 1.000000, 1.000000, 0.000000)
div r1.xyz, r2.xyzx, r1.xyzx
log r1.xyz, r1.xyzx
mul r1.xyz, r1.xyzx, l(78.843750, 78.843750, 78.843750, 0.000000)
exp o0.xyz, r1.xyzx
mov o0.w, r0.w
mov o1.w, r0.w
mul r1.xyz, r0.xyzx, cb0[0].xxxx
mad r0.xyz, r0.xyzx, cb0[0].xxxx, l(1.000000, 1.000000, 1.000000, 0.000000)
div r0.xyz, r1.xyzx, r0.xyzx
log r0.xyz, |r0.xyzx|
mul r0.xyz, r0.xyzx, l(0.454545, 0.454545, 0.454545, 0.000000)
exp o1.xyz, r0.xyzx
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[227], bundle is:[240] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneToneMap_PSHDR10_Reinhard_SRGB.pdb
// Shader Semantic Hash      : 0xb751e2a1e733f6a3
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 1, channelMask  3, param0, paramSlot1, DefaultVal={0,0,0,0}

codeLenInByte        = 508 bytes;

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
NumVgprs             = 14;
NumSgprs             = 24;
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
; SPI_PS_IN_CONTROL       = 0x00000001
SPIC:NUM_INTERP             = 1
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x000000FF
CB:OUTPUT0_ENABLE           = 15
CB:OUTPUT1_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0x1E8, dwords=0x7A)]
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
  exp           mrt0, v4, off, off, off done vm         // 000000000008: F8001801 00000004
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v4, v5, off, off done vm          // 000000000008: F8001803 00000504
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v4, v3, off, off done vm          // 000000000008: F8001803 00000304
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v4, v4, v5                       // 000000000000: 5E080B04
  v_cvt_pkrtz_f16_f32  v5, v6, v3                       // 000000000004: 5E0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v4, v4, v5                      // 000000000000: 5C080B04
  v_cvt_pknorm_u16_f32  v5, v6, v3                      // 000000000004: 5C0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v4, v4, v5                      // 000000000000: 5A080B04
  v_cvt_pknorm_i16_f32  v5, v6, v3                      // 000000000004: 5A0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v4, v4, v5                          // 000000000000: 60080B04
  v_cvt_pk_u16_u32  v5, v6, v3                          // 000000000004: 600A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v4, v4, v5                          // 000000000000: 62080B04
  v_cvt_pk_i16_i32  v5, v6, v3                          // 000000000004: 620A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v4, v5, v6, v3 done vm            // 000000000008: F800180F 03060504
end

; export table for mrt1 [patch@(bytes=0x1D8, dwords=0x76)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  s_nop         0x0000                                  // 000000000008: BF800000
  s_nop         0x0000                                  // 00000000000C: BF800000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, off, off, off vm              // 000000000008: F8001011 00000000
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, v1, off, off vm               // 000000000008: F8001013 00000100
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, v3, off, off vm               // 000000000008: F8001013 00000300
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 000000000000: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 000000000004: 5E020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v0, v1                      // 000000000000: 5C000300
  v_cvt_pknorm_u16_f32  v1, v2, v3                      // 000000000004: 5C020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v0, v1                      // 000000000000: 5A000300
  v_cvt_pknorm_i16_f32  v1, v2, v3                      // 000000000004: 5A020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v0, v1                          // 000000000000: 60000300
  v_cvt_pk_u16_u32  v1, v2, v3                          // 000000000004: 60020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v0, v1                          // 000000000000: 62000300
  v_cvt_pk_i16_i32  v1, v2, v3                          // 000000000004: 62020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, v1, v2, v3 vm                 // 000000000008: F800101F 03020100
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[20:21], exec                          // 000000000000: BE94047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_load_dwordx16  s[4:19], s[0:1], 0x00                // 000000000008: C1020100
  s_mov_b32     m0, s2                                  // 00000000000C: BEFC0302
  v_interp_p1_f32  v2, v0, attr0.x                      // 000000000010: C8080000
  v_interp_p1_f32  v3, v0, attr0.y                      // 000000000014: C80C0100
  v_interp_p2_f32  v2, v1, attr0.x                      // 000000000018: C8090001
  v_interp_p2_f32  v3, v1, attr0.y                      // 00000000001C: C80D0101
  s_waitcnt     lgkmcnt(0)                              // 000000000020: BF8C007F
  image_sample  v[0:3], v[2:3], s[4:11], s[12:15] dmask:0xf // 000000000024: F0800F00 00610002
  s_buffer_load_dwordx2  s[0:1], s[16:19], 0x00         // 00000000002C: C2401100
  s_waitcnt     vmcnt(0)                                // 000000000030: BF8C0F70
  s_nop         0x0000                                  // 000000000034: BF800000
  v_mul_legacy_f32  v4, 0x3d31699a, v2                  // 000000000038: 0E0804FF 3D31699A
  v_mul_legacy_f32  v5, 0x3c3a2454, v2                  // 000000000040: 0E0A04FF 3C3A2454
  v_mul_legacy_f32  v6, 0x3f6545b7, v2                  // 000000000048: 0E0C04FF 3F6545B7
  v_madmk_f32   v4, v1, 0x3ea897a6, v4                  // 000000000050: 40080901 3EA897A6
  v_madmk_f32   v5, v1, 0x3f6b66f9, v5                  // 000000000058: 400A0B01 3F6B66F9
  v_madmk_f32   v6, v1, 0x3db44044, v6                  // 000000000060: 400C0D01 3DB44044
  v_madmk_f32   v4, v0, 0x3f209d8c, v4                  // 000000000068: 40080900 3F209D8C
  v_madmk_f32   v5, v0, 0x3d8d82ba, v5                  // 000000000070: 400A0B00 3D8D82BA
  v_madmk_f32   v6, v0, 0x3c8647ad, v6                  // 000000000078: 400C0D00 3C8647AD
  s_waitcnt     lgkmcnt(0)                              // 000000000080: BF8C007F
  v_mul_legacy_f32  v4, s1, v4                          // 000000000084: 0E080801
  v_mul_legacy_f32  v5, s1, v5                          // 000000000088: 0E0A0A01
  v_mul_legacy_f32  v6, s1, v6                          // 00000000008C: 0E0C0C01
  s_mov_b32     s1, 0x38d1b717                          // 000000000090: BE8103FF 38D1B717
  v_mul_legacy_f32  v4, s1, v4                          // 000000000098: 0E080801
  v_mul_legacy_f32  v5, s1, v5                          // 00000000009C: 0E0A0A01
  v_mul_legacy_f32  v6, s1, v6                          // 0000000000A0: 0E0C0C01
  v_log_f32     v4, abs(v4)                             // 0000000000A4: D34E0104 00000104
  v_log_f32     v5, abs(v5)                             // 0000000000AC: D34E0105 00000105
  v_log_f32     v6, abs(v6)                             // 0000000000B4: D34E0106 00000106
  s_mov_b32     s1, 0x3e232000                          // 0000000000BC: BE8103FF 3E232000
  v_mul_legacy_f32  v4, s1, v4                          // 0000000000C4: 0E080801
  v_mul_legacy_f32  v5, s1, v5                          // 0000000000C8: 0E0A0A01
  v_mul_legacy_f32  v6, s1, v6                          // 0000000000CC: 0E0C0C01
  v_exp_f32     v4, v4                                  // 0000000000D0: 7E084B04
  v_exp_f32     v5, v5                                  // 0000000000D4: 7E0A4B05
  v_exp_f32     v6, v6                                  // 0000000000D8: 7E0C4B06
  s_mov_b32     s1, 0x41958000                          // 0000000000DC: BE8103FF 41958000
  v_mov_b32     v7, 0x4196d000                          // 0000000000E4: 7E0E02FF 4196D000
  v_mad_f32     v8, v4, s1, 1.0                         // 0000000000EC: D2820008 03C80304
  v_mad_f32     v9, v5, s1, 1.0                         // 0000000000F4: D2820009 03C80305
  v_mad_f32     v10, v6, s1, 1.0                        // 0000000000FC: D282000A 03C80306
  v_mad_f32     v11, v0, s0, 1.0                        // 000000000104: D282000B 03C80100
  v_mad_f32     v12, v1, s0, 1.0                        // 00000000010C: D282000C 03C80101
  v_mad_f32     v13, v2, s0, 1.0                        // 000000000114: D282000D 03C80102
  v_madak_f32   v4, v4, v7, 0x3f560000                  // 00000000011C: 42080F04 3F560000
  v_madak_f32   v5, v5, v7, 0x3f560000                  // 000000000124: 420A0F05 3F560000
  v_madak_f32   v6, v6, v7, 0x3f560000                  // 00000000012C: 420C0F06 3F560000
  v_rcp_f32     v7, v8                                  // 000000000134: 7E0E5508
  v_rcp_f32     v8, v9                                  // 000000000138: 7E105509
  v_rcp_f32     v9, v10                                 // 00000000013C: 7E12550A
  v_mul_legacy_f32  v0, s0, v0                          // 000000000140: 0E000000
  v_mul_legacy_f32  v1, s0, v1                          // 000000000144: 0E020200
  v_mul_legacy_f32  v2, s0, v2                          // 000000000148: 0E040400
  v_rcp_f32     v10, v11                                // 00000000014C: 7E14550B
  v_rcp_f32     v11, v12                                // 000000000150: 7E16550C
  v_rcp_f32     v12, v13                                // 000000000154: 7E18550D
  v_mul_f32     v4, v4, v7                              // 000000000158: 10080F04
  v_mul_f32     v5, v5, v8                              // 00000000015C: 100A1105
  v_mul_f32     v6, v6, v9                              // 000000000160: 100C1306
  v_mul_f32     v0, v0, v10                             // 000000000164: 10001500
  v_mul_f32     v1, v1, v11                             // 000000000168: 10021701
  v_mul_f32     v2, v2, v12                             // 00000000016C: 10041902
  v_log_f32     v4, v4                                  // 000000000170: 7E084F04
  v_log_f32     v5, v5                                  // 000000000174: 7E0A4F05
  v_log_f32     v6, v6                                  // 000000000178: 7E0C4F06
  s_mov_b32     s0, 0x429db000                          // 00000000017C: BE8003FF 429DB000
  v_log_f32     v0, abs(v0)                             // 000000000184: D34E0100 00000100
  v_log_f32     v1, abs(v1)                             // 00000000018C: D34E0101 00000101
  v_log_f32     v2, abs(v2)                             // 000000000194: D34E0102 00000102
  s_mov_b32     s1, 0x3ee8ba2f                          // 00000000019C: BE8103FF 3EE8BA2F
  v_mul_legacy_f32  v4, s0, v4                          // 0000000001A4: 0E080800
  v_mul_legacy_f32  v5, s0, v5                          // 0000000001A8: 0E0A0A00
  v_mul_legacy_f32  v6, s0, v6                          // 0000000001AC: 0E0C0C00
  v_mul_legacy_f32  v0, s1, v0                          // 0000000001B0: 0E000001
  v_mul_legacy_f32  v1, s1, v1                          // 0000000001B4: 0E020201
  v_mul_legacy_f32  v2, s1, v2                          // 0000000001B8: 0E040401
  v_exp_f32     v4, v4                                  // 0000000001BC: 7E084B04
  v_exp_f32     v5, v5                                  // 0000000001C0: 7E0A4B05
  v_exp_f32     v6, v6                                  // 0000000001C4: 7E0C4B06
  v_exp_f32     v0, v0                                  // 0000000001C8: 7E004B00
  v_exp_f32     v1, v1                                  // 0000000001CC: 7E024B01
  v_exp_f32     v2, v2                                  // 0000000001D0: 7E044B02
  s_mov_b64     exec, s[20:21]                          // 0000000001D4: BEFE0414
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 0000000001D8: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 0000000001DC: 5E020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 0000000001E0: F800141F 00000100
  v_cvt_pkrtz_f16_f32  v4, v4, v5                       // 0000000001E8: 5E080B04
  v_cvt_pkrtz_f16_f32  v5, v6, v3                       // 0000000001EC: 5E0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 0000000001F0: F8001C0F 00000504
  s_endpgm                                              // 0000000001F8: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   14
//  NumSRegs:                   24
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   150
//  CycleSimNWaves:             150
//  Code Size:                  508
//Assembler Counts:
//  num_32bit_ops                     : 79
//  num_64bit_ops                     : 15
//  num_alu                           : 75
//  num_fc                            : 16
//  num_inst_exp                      : 2
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 5
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 9
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 19
//  num_inst_vop2                     : 40
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 4
//  constant_literal_operands         : 0
//  num_tex                           : 3
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
// m_uNumVRegs                       : 14
// m_uNumSRegs                       : 24
// m_uSCCodeSize                     : 508
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 150
// m_uCycleSimNWaves                 : 150

// Assembler Counts:
// num_32bit_ops                     : 79
// num_64bit_ops                     : 15
// num_alu                           : 75
// num_fc                            : 16
// num_inst_exp                      : 2
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 5
// num_inst_sopc                     : 0
// num_inst_sop1                     : 9
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 19
// num_inst_vop2                     : 40
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 4
// num_inst_smem                     : 2
// constant_literal_operands         : 0
// num_tex                           : 3
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

const BYTE ToneMap_PSHDR10_Reinhard_SRGB[] =
{
     68,  88,  66,  67, 160, 128, 
     17,  51, 217,  82,  53, 196, 
    201, 168,  76, 113,  33,  50, 
    220,  16,   1,   0,   0,   0, 
    178,   8,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    140,   0,   0,   0, 216,   0, 
      0,   0,  52,   8,   0,   0, 
     68,   8,   0,   0,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     68,   0,   0,   0,   2,   0, 
      0,   0,   8,   0,   0,   0, 
     56,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     56,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  69,  88,  84,   7, 
      0,   0,  80,   0,   0,   0, 
    213,   1,   0,   0,  53,  16, 
      0,   0,   5,   0,   0,   0, 
    227,   0,   0,   0,  80,   0, 
      0,   0, 222,   0,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,   3,   0, 
      0,   0,  69,   0,   0, 139, 
    194,   0,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  16,   0, 
      0,  10,  18,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0, 140, 157,  32,  63, 
    166, 151, 168,  62, 154, 105, 
     49,  61,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  16,   0,   0,  10, 
     34,   0,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
    186, 130, 141,  61, 249, 102, 
    107,  63,  84,  36,  58,  60, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     16,   0,   0,  10,  66,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0, 173,  71, 
    134,  60,  68,  64, 180,  61, 
    183,  69, 101,  63,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     86, 133,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     56,   0,   0,  10, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
     23, 183, 209,  56,  23, 183, 
    209,  56,  23, 183, 209,  56, 
      0,   0,   0,   0,  47,   0, 
      0,   6, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16, 128, 129,   0,   0,   0, 
      1,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,  32, 
     35,  62,   0,  32,  35,  62, 
      0,  32,  35,  62,   0,   0, 
      0,   0,  25,   0,   0,   5, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  15, 114,   0,  16,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0, 208, 
    150,  65,   0, 208, 150,  65, 
      0, 208, 150,  65,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,  86,  63,   0,   0, 
     86,  63,   0,   0,  86,  63, 
      0,   0,   0,   0,  50,   0, 
      0,  15, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0, 128, 
    149,  65,   0, 128, 149,  65, 
      0, 128, 149,  65,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  14,   0, 
      0,   7, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  47,   0,   0,   5, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0, 176, 
    157,  66,   0, 176, 157,  66, 
      0, 176, 157,  66,   0,   0, 
      0,   0,  25,   0,   0,   5, 
    114,  32,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   5, 130,  32, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  13, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      6, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0, 128,  63,   0,   0, 
      0,   0,  14,   0,   0,   7, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     47,   0,   0,   6, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16, 128, 129,   0, 
      0,   0,   0,   0,   0,   0, 
     56,   0,   0,  10, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
     47, 186, 232,  62,  47, 186, 
    232,  62,  47, 186, 232,  62, 
      0,   0,   0,   0,  25,   0, 
      0,   5, 114,  32,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  53,  16, 
      0,   0, 242,   0,   0,   0, 
     23,   0,   1,   0,  41,  71, 
     17,   0, 120,   1, 237,  87, 
    207, 107,  20,  87,  28, 255, 
    190, 153, 183, 147, 217, 217, 
    217, 217, 137, 137,  77,  44, 
      5,   3, 245, 208, 139, 109, 
    197, 139, 136,  73,  54,  63, 
     74,  10,  75, 187, 237,  38, 
     43,  33,  12, 155, 236, 154, 
     81,  23,  53,  89, 178,  34, 
    226,  97, 186, 122, 240, 164, 
    224,  33,  90,  41,   8,  74, 
     75, 241,  82, 232, 161, 144, 
     34, 101, 211, 246, 180, 135, 
     10, 182, 253,  15, 138,  88, 
    143, 158, 196,  66, 232, 246, 
    243, 157, 204, 211,  73, 212, 
    219,  66,  21, 247,   3, 159, 
    247, 217, 207, 247, 189, 249, 
    190, 239, 155,  55,  11, 239, 
     77, 245,  82, 136, 222, 194, 
    106, 137, 181,  71,  63, 246, 
    211,  89, 157,  40, 129, 223, 
      2, 100, 101,  92,  79, 115, 
     75, 116,  63, 195,  45, 209, 
    123, 220, 240,   0, 141, 200, 
    129,  12, 130,  27, 240,  89, 
     40, 247,  41, 222, 253, 109, 
     96, 226, 232, 131, 183,  39, 
    120,  40,  79, 229, 130, 215, 
     34, 230,  65,  78, 151,   3, 
     57, 142,  84,  33, 120, 172, 
    130, 154,  63, 201,  77,  12, 
    125,  32, 231,  87, 144, 160, 
    122,  30, 229, 111, 201,  65, 
     62,  55,  47,   6,  47, 154, 
    235, 127,  25, 184,  54, 149, 
    139, 243, 115, 157,  12,  94, 
    239, 255, 141, 205, 186, 158, 
    181,  76, 181,  79,  12, 222, 
    143,  56, 120, 157,  42, 180, 
     26, 237,  35, 191,  43, 198, 
    237, 200, 243,  24,  94, 219, 
    207, 224, 203, 208,   6, 212, 
    123,  80,  80, 158, 243,  27, 
      2,  89,  77, 252, 120,  67, 
    193, 223,  34, 131, 223, 133, 
    250, 102, 218, 160, 130, 234, 
     63, 199,  13,  53, 214, 153, 
     87,   6, 233,   9,  59, 229, 
      5, 252, 230, 184,  77, 175, 
    179,  15, 255,  12,  49, 143, 
    215,  44,  83, 102, 201, 232, 
    177,  74, 153, 119,  54, 251, 
    225,  61, 120,  47, 230, 231, 
    224, 231,  98, 126,   1, 126, 
     33, 230,  43, 240,  21, 229, 
     85, 254,  76,  56, 159, 161, 
    159, 225,  80,  20, 219, 206, 
     94, 119, 107, 205, 125, 236, 
    121, 209, 113, 143,  26, 193, 
    146, 214, 163, 149, 118, 247, 
     71, 253,  58, 121, 240,  94, 
    204, 207, 193, 207, 197, 252, 
      2, 252,  66, 204,  87, 224, 
     43,  79, 125, 148, 127, 119, 
     56, 159, 166, 243, 247, 136, 
     96, 240,  42, 179,  91,  99, 
    103, 216, 173, 177,  51, 236, 
    214, 216,  25, 118, 107, 236, 
     12, 187,  53, 118, 134, 221, 
     26,  59, 195, 215, 161,  70, 
    144,   2, 185, 218,  12, 172, 
    127, 155,  56,   7, 253, 162, 
    233,  27,  77,  28, 188,  91, 
     36, 236, 150, 160, 100,  75, 
    136, 116, 235,  11, 186, 180, 
     78, 153, 198,  35, 141, 202, 
    184, 128, 101, 127, 173, 101, 
    224, 113, 118, 106,  75, 211, 
    249, 170, 186, 111, 184,  45, 
     45, 103, 102, 207, 193,  67, 
    109, 105,  59, 107,  31, 249, 
    163,  34, 105, 102, 191, 253, 
    242, 246, 136,  72,  89, 217, 
    127, 142, 158,  24,  21, 105, 
     59,  59, 153, 253,  97, 152, 
     16, 191, 116,  99, 104, 148, 
     16, 191, 115, 225, 242,  48, 
     33, 254, 221, 212, 197,  67, 
    156,  95, 152, 166,  35,  44, 
    203,  17, 182, 237, 180, 245, 
    243, 205, 129, 181, 223,  15, 
    196,  99,  82, 124, 250, 167, 
    196, 185,  45,   1,  77,  64, 
     13, 168,   1, 229, 177,  52, 
    244, 238, 200, 150, 177,  57, 
     51,  72, 228, 172, 192, 200, 
    217,  65, 216, 223, 184,  58, 
    214, 214, 156, 128, 238,  93, 
     27,  51, 233, 194,  31,  82, 
    111, 233,  73, 104,   2, 106, 
     65,  13, 104,  10,  74, 162, 
    165, 219,  80,   1,  77,  67, 
     53, 168, 204, 152, 227,  68, 
    135,  71,  19,  25,  43,  84, 
     35,  99, 135, 106,  22, 157, 
     32,  89, 116,   3, 171, 184, 
    131, 223, 161,  67, 154, 230, 
    144, 148,  78, 170, 216,  31, 
    216, 197, 183, 130, 116, 113, 
     48, 192, 179, 110, 162, 215, 
    114, 141,  62, 219, 165, 157, 
    228, 138,   1, 205, 213, 118, 
     73,  87, 230,  81,  95,  30, 
    245, 229, 185, 190,  70, 147, 
    190, 191,  49,  78,  88,  15, 
    159,  75,   5,  84,  64,  53, 
    168,   6, 229, 250,  63, 184, 
    243, 112, 132, 176,  62, 194, 
    250,   8, 235,  67, 216,  17, 
    152,  79,  96, 190, 248,  90, 
    113, 209,  12,  68,  78,  11, 
    180, 156,  12, 250,  37, 246, 
    115, 219, 153,  25, 231, 244, 
     45, 231, 124, 162, 243, 235, 
    187,  16,  15,  47,  24, 219, 
     97, 114, 199,  51, 132,  14, 
     27,  16, 191, 146, 133, 143, 
     33, 102, 179,  70,  24, 138, 
     46, 113,  27, 209,  93, 112, 
     15, 200, 247, 110, 129,  98, 
     24, 156,  71, 146, 129, 150, 
    232, 235, 199, 251, 255, 190, 
    245, 215, 231, 107, 252, 155, 
     49,  27,  61, 123,  32, 210, 
     33,  48, 158, 155, 232,  27, 
    110, 158,  67,  35,  26,  95, 
    139, 148, 133, 239,  61, 142, 
    186, 249, 243, 133,  20, 184, 
     25, 245,  95, 143, 148, 215, 
    146,   2, 183, 215, 241,  99, 
    212, 127,  12, 228,  74,  39, 
     14, 122,   5, 191, 182,  92, 
    247, 102,  43, 203, 103, 247, 
    142, 205,  76, 237, 157,  46, 
    159, 170, 157, 244, 235,  94, 
    174, 122, 186, 238,  77,  86, 
     87, 252,  35, 167, 103, 103, 
    114,  94, 125, 229, 136,  55, 
    125, 188, 188, 232, 175, 212, 
    189, 137, 229,  83, 181, 234, 
     73, 127,  49, 124,  40, 191, 
    228, 207,  44,  47, 249, 159, 
    148, 107, 243, 159,  77, 127, 
     60,  89, 216, 247, 225, 124, 
    193, 175,  46,  29,  47, 175, 
     44, 206,  79,  23, 166, 198, 
    223, 175,  45,  86, 232,  63, 
    180, 121,  67, 147,   0,   0, 
     88,  72,  83,  72,   8,   0, 
      0,   0, 163, 246,  51, 231, 
    161, 226,  81, 183,  88,  80, 
     68,  80, 102,   0,   0,   0, 
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
     79, 110, 101,  84, 111, 110, 
    101,  77,  97, 112,  95,  80, 
     83,  72,  68,  82,  49,  48, 
     95,  82, 101, 105, 110, 104, 
     97, 114, 100,  95,  83,  82, 
     71,  66,  46, 112, 100,  98
};