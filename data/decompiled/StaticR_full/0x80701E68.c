/* Function at 0x80701E68, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80701E68(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80701E78
    *(8 + r1) = r30; // stw @ 0x80701E7C
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x80701E84
    FUN_80703B6C(); // bl 0x80703B6C
    r0 = r3 + -2; // 0x80701E8C
    if (<=) goto 0x0x80701eac;
    if (==) goto 0x0x80701ec4;
    if (==) goto 0x0x80701f08;
    /* b 0x80701f48 */ // 0x80701EA8
    r3 = *(0 + r31); // lwz @ 0x80701EAC
    FUN_80703B74(); // bl 0x80703B74
    /* li r0, 3 */ // 0x80701EB4
    *(0x18 + r30) = r3; // stw @ 0x80701EB8
    *(0x14 + r30) = r0; // stw @ 0x80701EBC
    /* b 0x80701f48 */ // 0x80701EC0
    r3 = *(0 + r31); // lwz @ 0x80701EC4
    FUN_80703B74(); // bl 0x80703B74
    /* li r0, 5 */ // 0x80701ECC
    *(0x18 + r30) = r3; // stw @ 0x80701ED0
    /* lis r31, 0 */ // 0x80701ED4
    r5 = r3;
    *(0x14 + r30) = r0; // stw @ 0x80701EDC
    /* li r4, 5 */ // 0x80701EE0
    r3 = *(0 + r31); // lwz @ 0x80701EE4
    FUN_806E6538(r5, r4); // bl 0x806E6538
    r3 = *(0 + r31); // lwz @ 0x80701EEC
    FUN_806E69B4(r4); // bl 0x806E69B4
    if (==) goto 0x0x80701f48;
    r3 = *(0 + r31); // lwz @ 0x80701EFC
    FUN_806E5DC0(); // bl 0x806E5DC0
    /* b 0x80701f48 */ // 0x80701F04
    r3 = *(0 + r31); // lwz @ 0x80701F08
    FUN_80703B74(); // bl 0x80703B74
    /* li r0, 4 */ // 0x80701F10
    *(0x18 + r30) = r3; // stw @ 0x80701F14
    /* lis r31, 0 */ // 0x80701F18
    r5 = r3;
    *(0x14 + r30) = r0; // stw @ 0x80701F20
    /* li r4, 1 */ // 0x80701F24
    r3 = *(0 + r31); // lwz @ 0x80701F28
    FUN_806E6538(r5, r4); // bl 0x806E6538
    r3 = *(0 + r31); // lwz @ 0x80701F30
    FUN_806E69B4(r4); // bl 0x806E69B4
    if (==) goto 0x0x80701f48;
    r3 = *(0 + r31); // lwz @ 0x80701F40
    FUN_806E5DC0(); // bl 0x806E5DC0
    r0 = *(0x14 + r1); // lwz @ 0x80701F48
    r31 = *(0xc + r1); // lwz @ 0x80701F4C
    r30 = *(8 + r1); // lwz @ 0x80701F50
    return;
}