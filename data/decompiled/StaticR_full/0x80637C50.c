/* Function at 0x80637C50, size=168 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80637C50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lfs f6, 0(r5) */ // 0x80637C58
    /* lis r6, 0 */ // 0x80637C5C
    /* lfs f3, 0(r4) */ // 0x80637C60
    /* lfs f5, 4(r5) */ // 0x80637C64
    /* lfs f4, 4(r4) */ // 0x80637C68
    /* fmuls f2, f6, f3 */ // 0x80637C6C
    /* lfs f9, 8(r5) */ // 0x80637C70
    /* fmuls f1, f5, f4 */ // 0x80637C74
    /* lfs f8, 8(r4) */ // 0x80637C78
    *(0x14 + r1) = r0; // stw @ 0x80637C7C
    /* li r0, 0 */ // 0x80637C80
    /* fmuls f7, f9, f8 */ // 0x80637C84
    /* lfs f0, 0(r6) */ // 0x80637C88
    /* fadds f1, f2, f1 */ // 0x80637C8C
    /* fadds f1, f7, f1 */ // 0x80637C90
    /* fcmpu cr0, f0, f1 */ // 0x80637C94
    if (==) goto 0x0x80637cd8;
    /* fmuls f0, f5, f3 */ // 0x80637C9C
    /* fmuls f1, f6, f4 */ // 0x80637CA0
    /* fmuls f2, f6, f8 */ // 0x80637CA4
    /* fmuls f3, f9, f3 */ // 0x80637CA8
    /* fsubs f6, f1, f0 */ // 0x80637CAC
    /* fmuls f1, f5, f8 */ // 0x80637CB0
    /* fmuls f0, f9, f4 */ // 0x80637CB4
    /* stfs f6, 8(r3) */ // 0x80637CB8
    /* fsubs f2, f3, f2 */ // 0x80637CBC
    /* fsubs f0, f1, f0 */ // 0x80637CC0
    /* stfs f2, 4(r3) */ // 0x80637CC4
    /* stfs f0, 0(r3) */ // 0x80637CC8
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 1 */ // 0x80637CD0
    /* b 0x80637cec */ // 0x80637CD4
    /* lis r4, 0 */ // 0x80637CD8
    /* lfs f0, 0(r4) */ // 0x80637CDC
    /* stfs f0, 8(r3) */ // 0x80637CE0
    /* stfs f0, 4(r3) */ // 0x80637CE4
    /* stfs f0, 0(r3) */ // 0x80637CE8
    r3 = r0;
    r0 = *(0x14 + r1); // lwz @ 0x80637CF0
}