/* Function at 0x80637B64, size=236 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_80637B64(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lfs f7, 0(r5) */ // 0x80637B6C
    /* lis r7, 0 */ // 0x80637B70
    /* lfs f6, 0(r4) */ // 0x80637B74
    /* lfs f5, 4(r5) */ // 0x80637B78
    /* lfs f4, 4(r4) */ // 0x80637B7C
    /* fmuls f2, f7, f6 */ // 0x80637B80
    /* lfs f9, 8(r5) */ // 0x80637B84
    /* fmuls f1, f5, f4 */ // 0x80637B88
    /* lfs f8, 8(r4) */ // 0x80637B8C
    *(0x24 + r1) = r0; // stw @ 0x80637B90
    /* li r0, 0 */ // 0x80637B94
    /* fmuls f3, f9, f8 */ // 0x80637B98
    /* lfs f0, 0(r7) */ // 0x80637B9C
    /* fadds f1, f2, f1 */ // 0x80637BA0
    /* fadds f1, f3, f1 */ // 0x80637BA4
    /* fabs f1, f1 */ // 0x80637BA8
    /* fcmpu cr0, f0, f1 */ // 0x80637BAC
    if (==) goto 0x0x80637c28;
    /* fmuls f3, f7, f4 */ // 0x80637BB4
    /* fmuls f1, f5, f6 */ // 0x80637BBC
    /* fmuls f2, f9, f6 */ // 0x80637BC0
    /* fmuls f0, f7, f8 */ // 0x80637BC4
    /* fsubs f6, f3, f1 */ // 0x80637BC8
    /* fmuls f1, f5, f8 */ // 0x80637BCC
    /* fsubs f2, f2, f0 */ // 0x80637BD0
    /* stfs f6, 0x10(r1) */ // 0x80637BD4
    /* fmuls f0, f9, f4 */ // 0x80637BD8
    /* fmuls f3, f6, f7 */ // 0x80637BDC
    /* stfs f2, 0xc(r1) */ // 0x80637BE0
    /* fmuls f4, f2, f7 */ // 0x80637BE4
    /* fsubs f7, f1, f0 */ // 0x80637BE8
    /* fmuls f1, f2, f9 */ // 0x80637BEC
    /* fmuls f0, f6, f5 */ // 0x80637BF0
    /* stfs f7, 8(r1) */ // 0x80637BF4
    /* fmuls f5, f7, f5 */ // 0x80637BF8
    /* fmuls f2, f7, f9 */ // 0x80637BFC
    /* fsubs f6, f1, f0 */ // 0x80637C00
    /* fsubs f0, f5, f4 */ // 0x80637C04
    /* fsubs f1, f3, f2 */ // 0x80637C08
    /* stfs f6, 0(r3) */ // 0x80637C0C
    /* stfs f1, 4(r3) */ // 0x80637C10
    /* stfs f0, 8(r3) */ // 0x80637C14
    if (==) goto 0x0x80637c20;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 1 */ // 0x80637C20
    /* b 0x80637c3c */ // 0x80637C24
    /* lis r4, 0 */ // 0x80637C28
    /* lfs f0, 0(r4) */ // 0x80637C2C
    /* stfs f0, 8(r3) */ // 0x80637C30
    /* stfs f0, 4(r3) */ // 0x80637C34
    /* stfs f0, 0(r3) */ // 0x80637C38
    r3 = r0;
    r0 = *(0x24 + r1); // lwz @ 0x80637C40
    return;
}