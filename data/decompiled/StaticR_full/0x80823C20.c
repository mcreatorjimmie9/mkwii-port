/* Function at 0x80823C20, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80823C20(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80823C34
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80823C3C
    r29 = r3;
    if (!=) goto 0x0x80823c50;
    /* li r3, 1 */ // 0x80823C48
    /* b 0x80823cb0 */ // 0x80823C4C
    r0 = *(0x58 + r3); // lwz @ 0x80823C50
    if (==) goto 0x0x80823c94;
    if (!=) goto 0x0x80823c78;
    r0 = *(0x5c + r3); // lwz @ 0x80823C64
    if (>=) goto 0x0x80823c78;
    /* li r3, 1 */ // 0x80823C70
    /* b 0x80823cb0 */ // 0x80823C74
    r31 = *(0x82 + r3); // lbz @ 0x80823C78
    r3 = r3 + 0x54; // 0x80823C7C
    FUN_8083F990(r3, r3); // bl 0x8083F990
    r4 = r30;
    r5 = r31;
    r3 = r29 + 0x88; // 0x80823C8C
    FUN_80841F80(r3, r4, r5, r3); // bl 0x80841F80
    r3 = r29 + 0x88; // 0x80823C94
    /* li r4, 1 */ // 0x80823C98
    FUN_80841FBC(r5, r3, r3, r4); // bl 0x80841FBC
    r3 = *(0x8c + r29); // lwz @ 0x80823CA0
    r0 = r3 + -0x14; // 0x80823CA4
    /* cntlzw r0, r0 */ // 0x80823CA8
    /* srwi r3, r0, 5 */ // 0x80823CAC
    r0 = *(0x24 + r1); // lwz @ 0x80823CB0
    r31 = *(0x1c + r1); // lwz @ 0x80823CB4
    r30 = *(0x18 + r1); // lwz @ 0x80823CB8
    r29 = *(0x14 + r1); // lwz @ 0x80823CBC
    return;
}