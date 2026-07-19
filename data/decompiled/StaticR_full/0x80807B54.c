/* Function at 0x80807B54, size=192 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80807B54(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x20 + r1) = r28; // stw @ 0x80807B6C
    r28 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    /* lfs f0, 0x58(r28) */ // 0x80807B78
    r31 = r28 + 0xd8; // 0x80807B7C
    /* stfs f0, 0xd8(r28) */ // 0x80807B80
    r30 = r31;
    /* li r29, 0 */ // 0x80807B88
    /* lfs f0, 0x5c(r28) */ // 0x80807B8C
    /* stfs f0, 0xdc(r28) */ // 0x80807B90
    /* lfs f0, 0x60(r28) */ // 0x80807B94
    /* stfs f0, 0xe0(r28) */ // 0x80807B98
    /* lfs f0, 0x64(r28) */ // 0x80807B9C
    /* stfs f0, 0xe4(r28) */ // 0x80807BA0
    /* lfs f0, 0x68(r28) */ // 0x80807BA4
    /* stfs f0, 0xe8(r28) */ // 0x80807BA8
    /* lfs f0, 0x6c(r28) */ // 0x80807BAC
    /* stfs f0, 0xec(r28) */ // 0x80807BB0
    /* lfs f0, 0x70(r28) */ // 0x80807BB4
    /* stfs f0, 0xf0(r28) */ // 0x80807BB8
    /* lfs f0, 0x74(r28) */ // 0x80807BBC
    /* stfs f0, 0xf4(r28) */ // 0x80807BC0
    /* lfs f0, 0x78(r28) */ // 0x80807BC4
    /* stfs f0, 0xf8(r28) */ // 0x80807BC8
    /* lfs f0, 0x7c(r28) */ // 0x80807BCC
    /* stfs f0, 0xfc(r28) */ // 0x80807BD0
    /* lfs f0, 0x80(r28) */ // 0x80807BD4
    /* stfs f0, 0x100(r28) */ // 0x80807BD8
    /* lfs f0, 0x84(r28) */ // 0x80807BDC
    /* stfs f0, 0x104(r28) */ // 0x80807BE0
    r5 = r29;
    r4 = r28 + 0xd8; // 0x80807BEC
    FUN_805C70D8(r5, r3, r4); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80807BF4
    /* lfs f1, 0xc(r1) */ // 0x80807BFC
    /* lfs f0, 0x10(r1) */ // 0x80807C00
    /* stfs f2, 0x14(r1) */ // 0x80807C04
    /* stfs f1, 0x18(r1) */ // 0x80807C08
    /* stfs f0, 0x1c(r1) */ // 0x80807C0C
    FUN_805E3430(); // bl 0x805E3430
}