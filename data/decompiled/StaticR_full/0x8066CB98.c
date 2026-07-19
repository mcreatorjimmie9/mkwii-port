/* Function at 0x8066CB98, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8066CB98(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8066CBA8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066CBB0
    r30 = r3;
    if (==) goto 0x0x8066cc14;
    /* li r4, -1 */ // 0x8066CBBC
    r3 = r3 + 0x490; // 0x8066CBC0
    FUN_806A0540(r4, r3); // bl 0x806A0540
    r3 = r30 + 0x31c; // 0x8066CBC8
    /* li r4, -1 */ // 0x8066CBCC
    FUN_8066CEF8(r4, r3, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x1a8 */ // 0x8066CBD4
    if (==) goto 0x0x8066cbe4;
    /* li r4, 0 */ // 0x8066CBDC
    FUN_806A0540(r4, r4); // bl 0x806A0540
    if (==) goto 0x0x8066cc04;
    r3 = r30 + 0x44; // 0x8066CBEC
    /* li r4, -1 */ // 0x8066CBF0
    FUN_806688C8(r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x8066CBFC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8066cc14;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8066CC18
    r30 = *(8 + r1); // lwz @ 0x8066CC1C
    r0 = *(0x14 + r1); // lwz @ 0x8066CC20
    return;
}