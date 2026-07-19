/* Function at 0x8083FC90, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_8083FC90(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x8083FC9C
    /* stmw r26, 8(r1) */ // 0x8083FCA0
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x8083fda4;
    /* lis r5, 0 */ // 0x8083FCB0
    /* lis r4, 0 */ // 0x8083FCB4
    r5 = r5 + 0; // 0x8083FCB8
    *(0 + r3) = r5; // stw @ 0x8083FCBC
    r31 = *(0 + r4); // lwz @ 0x8083FCC0
    if (==) goto 0x0x8083fd88;
    /* li r0, 0 */ // 0x8083FCCC
    *(0 + r4) = r0; // stw @ 0x8083FCD0
    if (==) goto 0x0x8083fd88;
    if (==) goto 0x0x8083fd80;
    *(0 + r31) = r5; // stw @ 0x8083FCDC
    r30 = *(0 + r4); // lwz @ 0x8083FCE0
    if (==) goto 0x0x8083fd74;
    *(0 + r4) = r0; // stw @ 0x8083FCEC
    if (==) goto 0x0x8083fd74;
    if (==) goto 0x0x8083fd6c;
    *(0 + r30) = r5; // stw @ 0x8083FCF8
    r29 = *(0 + r4); // lwz @ 0x8083FCFC
    if (==) goto 0x0x8083fd60;
    *(0 + r4) = r0; // stw @ 0x8083FD08
    if (==) goto 0x0x8083fd60;
    if (==) goto 0x0x8083fd58;
    *(0 + r29) = r5; // stw @ 0x8083FD14
    r28 = *(0 + r4); // lwz @ 0x8083FD18
    if (==) goto 0x0x8083fd4c;
    *(0 + r4) = r0; // stw @ 0x8083FD24
    if (==) goto 0x0x8083fd4c;
    if (==) goto 0x0x8083fd44;
    *(0 + r28) = r5; // stw @ 0x8083FD30
    FUN_8083FE54(); // bl 0x8083FE54
    r3 = r28;
    /* li r4, 0 */ // 0x8083FD3C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8083FD50
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8083FD64
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8083FD78
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x8083FD8C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8083fda4;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}