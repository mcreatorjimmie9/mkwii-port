/* Function at 0x8082580C, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_8082580C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x80825818
    /* stmw r26, 8(r1) */ // 0x8082581C
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x80825920;
    /* lis r5, 0 */ // 0x8082582C
    /* lis r4, 0 */ // 0x80825830
    r5 = r5 + 0; // 0x80825834
    *(0 + r3) = r5; // stw @ 0x80825838
    r31 = *(0 + r4); // lwz @ 0x8082583C
    if (==) goto 0x0x80825904;
    /* li r0, 0 */ // 0x80825848
    *(0 + r4) = r0; // stw @ 0x8082584C
    if (==) goto 0x0x80825904;
    if (==) goto 0x0x808258fc;
    *(0 + r31) = r5; // stw @ 0x80825858
    r30 = *(0 + r4); // lwz @ 0x8082585C
    if (==) goto 0x0x808258f0;
    *(0 + r4) = r0; // stw @ 0x80825868
    if (==) goto 0x0x808258f0;
    if (==) goto 0x0x808258e8;
    *(0 + r30) = r5; // stw @ 0x80825874
    r29 = *(0 + r4); // lwz @ 0x80825878
    if (==) goto 0x0x808258dc;
    *(0 + r4) = r0; // stw @ 0x80825884
    if (==) goto 0x0x808258dc;
    if (==) goto 0x0x808258d4;
    *(0 + r29) = r5; // stw @ 0x80825890
    r28 = *(0 + r4); // lwz @ 0x80825894
    if (==) goto 0x0x808258c8;
    *(0 + r4) = r0; // stw @ 0x808258A0
    if (==) goto 0x0x808258c8;
    if (==) goto 0x0x808258c0;
    *(0 + r28) = r5; // stw @ 0x808258AC
    FUN_80825BFC(); // bl 0x80825BFC
    r3 = r28;
    /* li r4, 0 */ // 0x808258B8
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x808258CC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x808258E0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808258F4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x80825908
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80825920;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}