/* Function at 0x80808010, size=144 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80808010(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x80808020
    /* li r30, 0 */ // 0x80808028
    *(0x24 + r1) = r29; // stw @ 0x8080802C
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x80808034
    r28 = r3;
    /* b 0x80808084 */ // 0x8080803C
    r3 = *(0 + r31); // lwz @ 0x80808040
    r4 = r30;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DECC(r4); // bl 0x8061DECC
    if (==) goto 0x0x80808080;
    r3 = *(0 + r31); // lwz @ 0x80808058
    r4 = r30;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DA88(r4); // bl 0x8061DA88
    /* lfs f0, 0(r3) */ // 0x80808068
    /* stfs f0, 8(r1) */ // 0x8080806C
    /* lfs f0, 4(r3) */ // 0x80808070
    /* stfs f0, 0xc(r1) */ // 0x80808074
    /* lfs f0, 8(r3) */ // 0x80808078
    /* stfs f0, 0x10(r1) */ // 0x8080807C
    r30 = r30 + 1; // 0x80808080
    r3 = *(0 + r31); // lwz @ 0x80808084
    r0 = *(0x24 + r3); // lbz @ 0x80808088
    if (<) goto 0x0x80808040;
    r3 = r28;
    r5 = r29 + 0x30; // 0x8080809C
}