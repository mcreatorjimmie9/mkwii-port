/* Function at 0x808C3B9C, size=388 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808C3B9C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x808C3BA4
    /* li r31, 2 */ // 0x808C3BB0
    *(0x18 + r1) = r30; // stw @ 0x808C3BB4
    *(0x14 + r1) = r29; // stw @ 0x808C3BB8
    *(0x10 + r1) = r28; // stw @ 0x808C3BBC
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x808C3BC4
    r4 = *(0x98 + r4); // lwz @ 0x808C3BC8
    *(0x74 + r4) = r31; // stw @ 0x808C3BCC
    FUN_808B3318(); // bl 0x808B3318
    /* lis r5, 0 */ // 0x808C3BD4
    r3 = r28;
    r0 = *(0 + r5); // lwz @ 0x808C3BDC
    *(8 + r1) = r0; // stw @ 0x808C3BE4
    /* li r5, 1 */ // 0x808C3BE8
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r5, 0 */ // 0x808C3BF0
    /* li r4, 0 */ // 0x808C3BF4
    r3 = *(0 + r5); // lwz @ 0x808C3BF8
    /* mulli r6, r4, 0xf0 */ // 0x808C3BFC
    /* li r4, 6 */ // 0x808C3C00
    r0 = *(0x1780 + r3); // lwz @ 0x808C3C04
    /* li r29, 0 */ // 0x808C3C08
    /* li r30, 0 */ // 0x808C3C0C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808C3C14
    r3 = *(0 + r5); // lwz @ 0x808C3C18
    r0 = *(0x1780 + r3); // lwz @ 0x808C3C1C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808C3C24
    r0 = *(0 + r5); // lwz @ 0x808C3C28
    r3 = r0 + r6; // 0x808C3C2C
    *(0xce4 + r3) = r31; // stw @ 0x808C3C30
    r0 = *(0 + r5); // lwz @ 0x808C3C34
    r3 = r0 + r6; // 0x808C3C38
    *(0xdd4 + r3) = r31; // stw @ 0x808C3C3C
    r0 = *(0 + r5); // lwz @ 0x808C3C40
    r3 = r0 + r6; // 0x808C3C44
    *(0xec4 + r3) = r31; // stw @ 0x808C3C48
    r0 = *(0 + r5); // lwz @ 0x808C3C4C
    r3 = r0 + r6; // 0x808C3C50
    *(0xfb4 + r3) = r31; // stw @ 0x808C3C54
    r0 = *(0 + r5); // lwz @ 0x808C3C58
    r3 = r0 + r6; // 0x808C3C5C
    *(0x10a4 + r3) = r31; // stw @ 0x808C3C60
    r0 = *(0 + r5); // lwz @ 0x808C3C64
    r3 = r0 + r6; // 0x808C3C68
    *(0x1194 + r3) = r31; // stw @ 0x808C3C6C
    /* mulli r6, r4, 0xf0 */ // 0x808C3C70
    r0 = *(0 + r5); // lwz @ 0x808C3C74
    r3 = r0 + r6; // 0x808C3C78
    *(0xce4 + r3) = r31; // stw @ 0x808C3C7C
    r0 = *(0 + r5); // lwz @ 0x808C3C80
    r3 = r0 + r6; // 0x808C3C84
    *(0xdd4 + r3) = r31; // stw @ 0x808C3C88
    r0 = *(0 + r5); // lwz @ 0x808C3C8C
    r3 = r0 + r6; // 0x808C3C90
    *(0xec4 + r3) = r31; // stw @ 0x808C3C94
    r0 = *(0 + r5); // lwz @ 0x808C3C98
    r3 = r0 + r6; // 0x808C3C9C
    *(0xfb4 + r3) = r31; // stw @ 0x808C3CA0
    r0 = *(0 + r5); // lwz @ 0x808C3CA4
    r3 = r0 + r6; // 0x808C3CA8
    *(0x10a4 + r3) = r31; // stw @ 0x808C3CAC
    r0 = *(0 + r5); // lwz @ 0x808C3CB0
    r3 = r0 + r6; // 0x808C3CB4
    *(0x1194 + r3) = r31; // stw @ 0x808C3CB8
    r3 = *(0x48 + r28); // lwz @ 0x808C3CBC
    /* lwzx r3, r3, r30 */ // 0x808C3CC0
    FUN_8064A340(); // bl 0x8064A340
    if (==) goto 0x0x808c3cf0;
    r12 = *(0 + r28); // lwz @ 0x808C3CD0
    r3 = r28;
    r4 = *(0x48 + r28); // lwz @ 0x808C3CD8
    /* li r5, 0 */ // 0x808C3CDC
    r12 = *(0x64 + r12); // lwz @ 0x808C3CE0
    /* lwzx r4, r4, r30 */ // 0x808C3CE4
    /* mtctr r12 */ // 0x808C3CE8
    /* bctrl  */ // 0x808C3CEC
    r29 = r29 + 1; // 0x808C3CF0
    r30 = r30 + 4; // 0x808C3CF4
    if (<) goto 0x0x808c3cbc;
    r0 = *(0x24 + r1); // lwz @ 0x808C3D00
    r31 = *(0x1c + r1); // lwz @ 0x808C3D04
    r30 = *(0x18 + r1); // lwz @ 0x808C3D08
    r29 = *(0x14 + r1); // lwz @ 0x808C3D0C
    r28 = *(0x10 + r1); // lwz @ 0x808C3D10
    return;
}