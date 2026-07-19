/* Function at 0x8061CE30, size=148 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 3 function(s) */

int FUN_8061CE30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stmw r23, 0x1c(r1) */ // 0x8061CE3C
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    FUN_8061D9A4(); // bl 0x8061D9A4
    FUN_80620824(); // bl 0x80620824
    /* lis r3, 0 */ // 0x8061CE58
    /* li r4, 0 */ // 0x8061CE5C
    r3 = *(0 + r3); // lwz @ 0x8061CE60
    r0 = *(0xb70 + r3); // lwz @ 0x8061CE64
    if (<) goto 0x0x8061ce7c;
    if (>) goto 0x0x8061ce7c;
    /* li r4, 1 */ // 0x8061CE78
    if (==) goto 0x0x8061cebc;
    /* mulli r0, r28, 0xf0 */ // 0x8061CE84
    r3 = r3 + r0; // 0x8061CE88
    r0 = *(0x38 + r3); // lwz @ 0x8061CE8C
    if (!=) goto 0x0x8061cea8;
    /* lis r3, 0 */ // 0x8061CE98
    /* li r0, 1 */ // 0x8061CE9C
    *(0 + r3) = r0; // stb @ 0x8061CEA0
    /* b 0x8061cebc */ // 0x8061CEA4
    if (!=) goto 0x0x8061cebc;
    /* lis r3, 0 */ // 0x8061CEB0
    /* li r0, 1 */ // 0x8061CEB4
    *(0 + r3) = r0; // stb @ 0x8061CEB8
    /* li r3, 8 */ // 0x8061CEBC
    FUN_805E3430(r3, r3); // bl 0x805E3430
}