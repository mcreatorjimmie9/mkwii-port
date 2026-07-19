/* Function at 0x805BBEFC, size=256 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r26 */
/* Calls: 7 function(s) */

int FUN_805BBEFC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r26 */
    *(0xb4 + r1) = r0; // stw @ 0x805BBF08
    /* stmw r26, 0x98(r1) */ // 0x805BBF0C
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    if (!=) goto 0x0x805bbf30;
    r0 = *(0x14 + r3); // lbz @ 0x805BBF24
    if (!=) goto 0x0x805bbf38;
    /* li r0, 1 */ // 0x805BBF30
    *(0x14 + r3) = r0; // stb @ 0x805BBF34
    /* lis r3, 0 */ // 0x805BBF38
    r31 = *(0 + r3); // lwz @ 0x805BBF40
    /* li r5, 2 */ // 0x805BBF44
    r3 = r31;
    FUN_805BAB90(r3, r4, r5, r3); // bl 0x805BAB90
    r30 = r3;
    if (!=) goto 0x0x805bbf88;
    r3 = r31;
    /* li r4, 0x30 */ // 0x805BBF60
    FUN_805BB588(r3, r4); // bl 0x805BB588
    r30 = r3;
    if (!=) goto 0x0x805bbf88;
    r3 = r31;
    /* li r5, 2 */ // 0x805BBF7C
    FUN_805BAB90(r3, r4, r5); // bl 0x805BAB90
    r30 = r3;
    if (!=) goto 0x0x805bbfcc;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    FUN_805BB100(r4, r5, r6, r3); // bl 0x805BB100
    r30 = r3;
    FUN_805BAD70(r6, r3, r3); // bl 0x805BAD70
    if (==) goto 0x0x805bbfc0;
    /* li r30, 8 */ // 0x805BBFB8
    /* b 0x805bbfcc */ // 0x805BBFBC
    if (!=) goto 0x0x805bbfcc;
    r30 = r3;
    if (!=) goto 0x0x805bc034;
    r3 = *(0x24 + r26); // lwz @ 0x805BBFD4
    FUN_805E3430(); // bl 0x805E3430
    r31 = r3;
    r3 = *(0x24 + r26); // lwz @ 0x805BBFE0
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x805bc01c;
    if (==) goto 0x0x805bc004;
    r3 = *(0x24 + r26); // lwz @ 0x805BBFF8
}