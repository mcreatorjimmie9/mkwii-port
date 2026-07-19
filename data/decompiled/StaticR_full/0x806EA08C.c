/* Function at 0x806EA08C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_806EA08C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x806EA098
    /* stmw r26, 8(r1) */ // 0x806EA09C
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x806ea0f8;
    r29 = r26;
    /* li r28, 0 */ // 0x806EA0B0
    /* li r31, 0 */ // 0x806EA0B4
    r30 = *(0 + r29); // lwz @ 0x806EA0B8
    if (==) goto 0x0x806ea0d8;
    r3 = *(0 + r30); // lwz @ 0x806EA0C4
    FUN_805E3430(); // bl 0x805E3430
    *(0 + r30) = r31; // stw @ 0x806EA0CC
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r28 + 1; // 0x806EA0D8
    r29 = r29 + 4; // 0x806EA0DC
    if (<) goto 0x0x806ea0b8;
    if (<=) goto 0x0x806ea0f8;
    r3 = r26;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r26;
    r0 = *(0x24 + r1); // lwz @ 0x806EA100
}