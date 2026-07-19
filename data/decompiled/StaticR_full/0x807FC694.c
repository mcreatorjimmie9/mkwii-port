/* Function at 0x807FC694, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FC694(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807FC6A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807FC6AC
    r30 = r3;
    if (==) goto 0x0x807fc6f8;
    /* addic. r0, r3, 0xb0 */ // 0x807FC6B8
    if (==) goto 0x0x807fc6e8;
    r0 = *(0xb8 + r3); // lwz @ 0x807FC6C0
    /* lis r4, 0 */ // 0x807FC6C4
    r4 = r4 + 0; // 0x807FC6C8
    *(0xb0 + r3) = r4; // stw @ 0x807FC6CC
    if (==) goto 0x0x807fc6e8;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807FC6E0
    *(0xb8 + r30) = r0; // stw @ 0x807FC6E4
    if (<=) goto 0x0x807fc6f8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807FC6FC
    r30 = *(8 + r1); // lwz @ 0x807FC700
    r0 = *(0x14 + r1); // lwz @ 0x807FC704
}