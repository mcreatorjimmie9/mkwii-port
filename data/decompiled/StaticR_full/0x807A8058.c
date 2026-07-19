/* Function at 0x807A8058, size=132 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_807A8058(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    *(0x34 + r1) = r0; // stw @ 0x807A8064
    /* stmw r22, 8(r1) */ // 0x807A8068
    r22 = r3;
    r23 = r4;
    if (==) goto 0x0x807a81d0;
    /* lis r28, 0 */ // 0x807A8078
    /* lis r29, 0 */ // 0x807A807C
    r28 = r28 + 0; // 0x807A8080
    *(0 + r3) = r28; // stw @ 0x807A8084
    r27 = *(0 + r29); // lwz @ 0x807A8088
    if (==) goto 0x0x807a81b4;
    /* li r30, 0 */ // 0x807A8094
    *(0 + r29) = r30; // stw @ 0x807A8098
    if (==) goto 0x0x807a81b4;
    /* lis r31, 0 */ // 0x807A80A0
    r3 = r27 + 0x14; // 0x807A80A4
    r4 = r31 + 0; // 0x807A80A8
    /* li r5, 0xc */ // 0x807A80AC
    /* li r6, 4 */ // 0x807A80B0
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x807a81ac;
    *(0 + r27) = r28; // stw @ 0x807A80C0
    r26 = *(0 + r29); // lwz @ 0x807A80C4
    if (==) goto 0x0x807a81a0;
    *(0 + r29) = r30; // stw @ 0x807A80D0
    if (==) goto 0x0x807a81a0;
    r3 = r26 + 0x14; // 0x807A80D8
}