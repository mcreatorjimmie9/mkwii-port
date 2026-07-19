/* Function at 0x805EDF94, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805EDF94(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805EDFA8
    r30 = r3;
    r0 = *(0x28 + r3); // lwz @ 0x805EDFB0
    if (!=) goto 0x0x805ee07c;
    r0 = *(4 + r3); // lwz @ 0x805EDFBC
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805EDFC0
    if (==) goto 0x0x805ee024;
    r0 = *(0x3c + r3); // lwz @ 0x805EDFC8
    /* li r3, 0 */ // 0x805EDFCC
    if (==) goto 0x0x805edfe4;
    if (==) goto 0x0x805edff0;
    /* b 0x805edffc */ // 0x805EDFE0
    /* lis r3, 0 */ // 0x805EDFE4
    r3 = *(0 + r3); // lwz @ 0x805EDFE8
    /* b 0x805edffc */ // 0x805EDFEC
    /* lis r3, 0 */ // 0x805EDFF0
    r3 = r3 + 0; // 0x805EDFF4
    r3 = *(4 + r3); // lwz @ 0x805EDFF8
    r4 = *(0x10 + r3); // lwz @ 0x805EDFFC
    /* li r3, 0x44 */ // 0x805EE000
    /* li r5, 4 */ // 0x805EE004
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805ee078;
    r4 = r30;
    /* li r5, 2 */ // 0x805EE018
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    /* b 0x805ee078 */ // 0x805EE020
    r0 = *(0x3c + r3); // lwz @ 0x805EE024
    /* li r3, 0 */ // 0x805EE028
    if (==) goto 0x0x805ee040;
    if (==) goto 0x0x805ee04c;
    /* b 0x805ee058 */ // 0x805EE03C
    /* lis r3, 0 */ // 0x805EE040
    r3 = *(0 + r3); // lwz @ 0x805EE044
    /* b 0x805ee058 */ // 0x805EE048
    /* lis r3, 0 */ // 0x805EE04C
    r3 = r3 + 0; // 0x805EE050
    r3 = *(4 + r3); // lwz @ 0x805EE054
    r4 = *(0x10 + r3); // lwz @ 0x805EE058
    /* li r3, 0x3c */ // 0x805EE05C
    /* li r5, 4 */ // 0x805EE060
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805ee078;
    r4 = r30;
    FUN_805E5470(r5, r4); // bl 0x805E5470
    *(0x28 + r30) = r3; // stw @ 0x805EE078
}