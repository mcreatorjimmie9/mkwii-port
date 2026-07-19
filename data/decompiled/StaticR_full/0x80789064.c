/* Function at 0x80789064, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_80789064(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x80789070
    /* stmw r26, 8(r1) */ // 0x80789074
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x80789178;
    /* lis r5, 0 */ // 0x80789084
    /* lis r4, 0 */ // 0x80789088
    r5 = r5 + 0; // 0x8078908C
    *(0 + r3) = r5; // stw @ 0x80789090
    r31 = *(0 + r4); // lwz @ 0x80789094
    if (==) goto 0x0x8078915c;
    /* li r0, 0 */ // 0x807890A0
    *(0 + r4) = r0; // stw @ 0x807890A4
    if (==) goto 0x0x8078915c;
    if (==) goto 0x0x80789154;
    *(0 + r31) = r5; // stw @ 0x807890B0
    r30 = *(0 + r4); // lwz @ 0x807890B4
    if (==) goto 0x0x80789148;
    *(0 + r4) = r0; // stw @ 0x807890C0
    if (==) goto 0x0x80789148;
    if (==) goto 0x0x80789140;
    *(0 + r30) = r5; // stw @ 0x807890CC
    r29 = *(0 + r4); // lwz @ 0x807890D0
    if (==) goto 0x0x80789134;
    *(0 + r4) = r0; // stw @ 0x807890DC
    if (==) goto 0x0x80789134;
    if (==) goto 0x0x8078912c;
    *(0 + r29) = r5; // stw @ 0x807890E8
    r28 = *(0 + r4); // lwz @ 0x807890EC
    if (==) goto 0x0x80789120;
    *(0 + r4) = r0; // stw @ 0x807890F8
    if (==) goto 0x0x80789120;
    if (==) goto 0x0x80789118;
    *(0 + r28) = r5; // stw @ 0x80789104
    FUN_80789238(); // bl 0x80789238
    r3 = r28;
    /* li r4, 0 */ // 0x80789110
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80789124
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80789138
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8078914C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x80789160
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80789178;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}