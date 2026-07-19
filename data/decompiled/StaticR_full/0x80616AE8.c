/* Function at 0x80616AE8, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80616AE8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80616AF8
    r30 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80616B04
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80616B0C
    r3 = *(0x68 + r3); // lwz @ 0x80616B10
    /* lwzx r3, r3, r0 */ // 0x80616B14
    FUN_80737BB8(r4); // bl 0x80737BB8
    r3 = r30;
    /* li r4, 7 */ // 0x80616B20
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E010(r3, r4, r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80616B30
    /* lis r31, 0 */ // 0x80616B34
    /* lfs f1, 0(r31) */ // 0x80616B38
    /* li r4, 0x1a8 */ // 0x80616B3C
    r12 = *(0xe0 + r12); // lwz @ 0x80616B40
    /* mtctr r12 */ // 0x80616B44
    /* bctrl  */ // 0x80616B48
    r3 = r30;
    FUN_8061E010(r4, r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80616B54
    /* li r4, 0x1a9 */ // 0x80616B58
    /* lfs f1, 0(r31) */ // 0x80616B5C
    r12 = *(0xe0 + r12); // lwz @ 0x80616B60
    /* mtctr r12 */ // 0x80616B64
    /* bctrl  */ // 0x80616B68
    r0 = *(0x14 + r1); // lwz @ 0x80616B6C
    r31 = *(0xc + r1); // lwz @ 0x80616B70
    r30 = *(8 + r1); // lwz @ 0x80616B74
    return;
}