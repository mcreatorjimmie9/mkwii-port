/* Function at 0x80823CCC, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80823CCC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80823CE4
    *(0x10 + r1) = r28; // stw @ 0x80823CE8
    r0 = *(0x8c + r3); // lwz @ 0x80823CEC
    if (!=) goto 0x0x80823d78;
    r0 = *(0x1a + r3); // lbz @ 0x80823CF8
    if (!=) goto 0x0x80823d78;
    /* lis r7, 0 */ // 0x80823D04
    r8 = *(0x18 + r3); // lbz @ 0x80823D08
    r7 = *(0 + r7); // lwz @ 0x80823D0C
    /* slwi r0, r8, 2 */ // 0x80823D10
    r7 = *(0xc + r7); // lwz @ 0x80823D14
    /* lwzx r7, r7, r0 */ // 0x80823D18
    r0 = *(0x38 + r7); // lwz @ 0x80823D1C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80823D20
    if (!=) goto 0x0x80823d78;
    /* lis r7, 0 */ // 0x80823D28
    r28 = *(0x19 + r3); // lbz @ 0x80823D2C
    r3 = *(0 + r7); // lbz @ 0x80823D30
    r30 = r5;
    /* neg r0, r3 */ // 0x80823D3C
    r0 = r0 | r3; // 0x80823D40
    r0 = r0 >> 0x1f; // srawi
    /* andc r29, r6, r0 */ // 0x80823D48
    if (==) goto 0x0x80823d54;
    r30 = r4;
    r3 = r8;
    FUN_808429B4(r3); // bl 0x808429B4
    r0 = r3;
    r6 = r28;
    r7 = r29;
    r3 = r31 + 0x54; // 0x80823D68
    /* clrlwi r4, r30, 0x10 */ // 0x80823D6C
    /* clrlwi r5, r0, 0x18 */ // 0x80823D70
    FUN_8083F5F0(r6, r7, r3); // bl 0x8083F5F0
    r0 = *(0x24 + r1); // lwz @ 0x80823D78
    r31 = *(0x1c + r1); // lwz @ 0x80823D7C
    r30 = *(0x18 + r1); // lwz @ 0x80823D80
    r29 = *(0x14 + r1); // lwz @ 0x80823D84
    r28 = *(0x10 + r1); // lwz @ 0x80823D88
    return;
}