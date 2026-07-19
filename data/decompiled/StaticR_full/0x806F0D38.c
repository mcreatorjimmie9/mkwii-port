/* Function at 0x806F0D38, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806F0D38(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806F0D40
    *(0x14 + r1) = r0; // stw @ 0x806F0D44
    r3 = *(0 + r3); // lwz @ 0x806F0D48
    FUN_806EF51C(r3); // bl 0x806EF51C
    /* lis r3, 0 */ // 0x806F0D50
    r3 = *(0 + r3); // lwz @ 0x806F0D54
    FUN_806EA930(r3); // bl 0x806EA930
    /* lis r3, 0 */ // 0x806F0D5C
    /* li r0, 1 */ // 0x806F0D60
    r3 = *(0 + r3); // lwz @ 0x806F0D64
    *(0x2756 + r3) = r0; // stb @ 0x806F0D68
    r0 = *(0x14 + r1); // lwz @ 0x806F0D6C
    return;
}