/* Function at 0x80708E40, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_80708E40(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x80708E4C
    /* stmw r27, 0xc(r1) */ // 0x80708E50
    /* mulli r30, r4, 0x254 */ // 0x80708E54
    r27 = r3;
    r28 = r8;
    r3 = r3 + r30; // 0x80708E60
    r29 = r9;
    *(0x3b4 + r3) = r5; // stw @ 0x80708E68
    if (<) goto 0x0x80708f08;
    /* li r0, 0 */ // 0x80708E70
    r31 = r3 + 0x174; // 0x80708E74
    *(0x1f4 + r3) = r0; // stb @ 0x80708E78
    r3 = r31;
    r4 = r6;
    r5 = r7;
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    if (==) goto 0x0x80708eec;
    r3 = r28;
    r4 = r29;
    FUN_8066E0EC(r3, r4); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x80708EA0
    r0 = r0 | r3; // 0x80708EA4
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80708EA8
    if (==) goto 0x0x80708eec;
    r3 = r27 + r30; // 0x80708EB0
    /* lis r31, 0 */ // 0x80708EB4
    r30 = r3 + 0x174; // 0x80708EB8
    r5 = r28;
    r31 = r31 + 0; // 0x80708EC0
    r6 = r29;
    r3 = r30;
    /* li r7, 0 */ // 0x80708ECC
    r4 = r31 + 0xd6; // 0x80708ED0
    FUN_806A105C(r6, r3, r7, r4); // bl 0x806A105C
    r3 = r30;
    r4 = r31 + 0xda; // 0x80708EDC
    /* li r5, 1 */ // 0x80708EE0
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    /* b 0x80708f10 */ // 0x80708EE8
    /* lis r4, 0 */ // 0x80708EEC
    r3 = r31;
    r4 = r4 + 0; // 0x80708EF4
    /* li r5, 0 */ // 0x80708EF8
    r4 = r4 + 0xde; // 0x80708EFC
    FUN_806A11CC(r4, r3, r4, r5, r4); // bl 0x806A11CC
    /* b 0x80708f10 */ // 0x80708F04
    /* li r0, 1 */ // 0x80708F08
    *(0x1f4 + r3) = r0; // stb @ 0x80708F0C
    r0 = *(0x24 + r1); // lwz @ 0x80708F14
    return;
}