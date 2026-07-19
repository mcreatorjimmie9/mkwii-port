/* Function at 0x808C493C, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808C493C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C4950
    r30 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x808C4958
    if (!=) goto 0x0x808c496c;
    FUN_808B3CF4(); // bl 0x808B3CF4
    /* b 0x808c49f4 */ // 0x808C4968
    /* lis r3, 0 */ // 0x808C496C
    r3 = *(0 + r3); // lwz @ 0x808C4970
    r0 = *(0x1760 + r3); // lwz @ 0x808C4974
    if (==) goto 0x0x808c4988;
    if (!=) goto 0x0x808c49c0;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808C498C
    if (>) goto 0x0x808c49ac;
    r3 = r30;
    r5 = r31;
    /* li r4, 0x76 */ // 0x808C49A0
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808c49f4 */ // 0x808C49A8
    r3 = r30;
    r5 = r31;
    /* li r4, 0x81 */ // 0x808C49B4
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808c49f4 */ // 0x808C49BC
    FUN_808CFA50(r3, r5, r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808C49C4
    if (>) goto 0x0x808c49e4;
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6c */ // 0x808C49D8
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808c49f4 */ // 0x808C49E0
    r3 = r30;
    r5 = r31;
    /* li r4, 0x81 */ // 0x808C49EC
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    r0 = *(0x14 + r1); // lwz @ 0x808C49F4
    r31 = *(0xc + r1); // lwz @ 0x808C49F8
    r30 = *(8 + r1); // lwz @ 0x808C49FC
    return;
}