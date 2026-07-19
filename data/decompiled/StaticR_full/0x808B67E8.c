/* Function at 0x808B67E8, size=124 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808B67E8(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xdc + r1) = r31; // stw @ 0x808B67F8
    r31 = r5;
    *(0xd8 + r1) = r30; // stw @ 0x808B6800
    r30 = r4;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808B680C
    /* slwi r0, r31, 2 */ // 0x808B6810
    r3 = r3 + 0; // 0x808B6814
    /* lwzx r0, r3, r0 */ // 0x808B6818
    *(8 + r1) = r0; // stw @ 0x808B681C
    if (!=) goto 0x0x808b683c;
    r3 = r30;
    /* li r4, 0xd88 */ // 0x808B682C
    /* li r5, 0 */ // 0x808B6830
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* b 0x808b684c */ // 0x808B6838
    r3 = r30;
    /* li r4, 0xd84 */ // 0x808B6844
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x808B684C
    r31 = *(0xdc + r1); // lwz @ 0x808B6850
    r30 = *(0xd8 + r1); // lwz @ 0x808B6854
    return;
}