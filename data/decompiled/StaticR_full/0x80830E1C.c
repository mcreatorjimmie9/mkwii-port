/* Function at 0x80830E1C, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_80830E1C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x80830E24
    *(0x14 + r1) = r29; // stw @ 0x80830E34
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80830E3C
    r28 = r3;
    r0 = *(0 + r5); // lbz @ 0x80830E44
    if (>=) goto 0x0x80830f18;
    r0 = *(0x78 + r3); // lwz @ 0x80830E50
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80830E54
    if (!=) goto 0x0x80830e64;
    r0 = *(0x6c + r3); // lbz @ 0x80830E5C
    /* b 0x80830e68 */ // 0x80830E60
    /* li r0, 0xc */ // 0x80830E64
    if (==) goto 0x0x80830f18;
    r3 = r28;
    r4 = r29;
    FUN_8082E474(r3, r4); // bl 0x8082E474
    if (!=) goto 0x0x80830f18;
    /* lis r3, 0 */ // 0x80830E84
    /* li r31, 0 */ // 0x80830E88
    r3 = *(0 + r3); // lwz @ 0x80830E8C
    /* mulli r0, r29, 0x248 */ // 0x80830E90
    r3 = *(0x14 + r3); // lwz @ 0x80830E94
    r30 = r3 + r0; // 0x80830E98
    r3 = r30;
    FUN_8061EB90(r3); // bl 0x8061EB90
    if (!=) goto 0x0x80830eb8;
    r0 = *(0x240 + r30); // lwz @ 0x80830EAC
    if (<=) goto 0x0x80830ebc;
    /* li r31, 1 */ // 0x80830EB8
    if (!=) goto 0x0x80830f18;
    r4 = *(0x1e4 + r28); // lbz @ 0x80830EC4
    if (>=) goto 0x0x80830ef0;
    /* lis r3, 0 */ // 0x80830ED0
    r3 = *(0 + r3); // lwz @ 0x80830ED4
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061DA88(r3); // bl 0x8061DA88
    r4 = r3;
    r3 = r28 + 0x44; // 0x80830EE4
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* stfs f1, 0x1e8(r28) */ // 0x80830EEC
    r3 = r30;
    FUN_8061DA88(r4, r3, r3); // bl 0x8061DA88
    r4 = r3;
    r3 = r28 + 0x44; // 0x80830EFC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x1e8(r28) */ // 0x80830F04
}