/* Function at 0x808B9AE0, size=288 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_808B9AE0(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    *(0xdc + r1) = r31; // stw @ 0x808B9AEC
    r31 = r3;
    /* li r3, 0x6e */ // 0x808B9AF4
    FUN_808BA42C(r3); // bl 0x808BA42C
    /* lis r4, 0 */ // 0x808B9AFC
    r0 = *(0x23d4 + r3); // lwz @ 0x808B9B00
    r3 = *(0 + r4); // lwz @ 0x808B9B04
    r3 = *(0 + r3); // lwz @ 0x808B9B08
    r3 = *(0 + r3); // lwz @ 0x808B9B0C
    if (==) goto 0x0x808b9b3c;
    if (==) goto 0x0x808b9b3c;
    /* lis r4, 0 */ // 0x808B9B20
    /* slwi r0, r0, 2 */ // 0x808B9B24
    r4 = r4 + 0; // 0x808B9B28
    r3 = r31;
    r4 = r4 + r0; // 0x808B9B30
    /* li r5, 1 */ // 0x808B9B34
    FUN_808B4A2C(r4, r3, r5); // bl 0x808B4A2C
    r3 = *(0x2bc + r31); // lwz @ 0x808B9B3C
    /* li r4, 0 */ // 0x808B9B40
    /* li r5, 0 */ // 0x808B9B44
    FUN_808D5A00(r5, r4, r5); // bl 0x808D5A00
    r12 = *(0 + r31); // lwz @ 0x808B9B4C
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808B9B54
    /* mtctr r12 */ // 0x808B9B58
    /* bctrl  */ // 0x808B9B5C
    /* li r4, 1 */ // 0x808B9B60
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r3 = r31;
    FUN_808B3318(r4, r3); // bl 0x808B3318
    FUN_80654ECC(r4, r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808B9B78
    r4 = *(0 + r3); // lwz @ 0x808B9B7C
    r0 = *(0x1760 + r4); // lwz @ 0x808B9B80
    if (==) goto 0x0x808b9b98;
    if (==) goto 0x0x808b9bac;
    /* b 0x808b9bec */ // 0x808B9B94
    r3 = *(0x2bc + r31); // lwz @ 0x808B9B98
    /* li r4, 0xd21 */ // 0x808B9B9C
    /* li r5, 0 */ // 0x808B9BA0
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    /* b 0x808b9bec */ // 0x808B9BA8
    r3 = *(0x175c + r4); // lwz @ 0x808B9BAC
    r3 = r3 + 0xd53; // 0x808B9BB0
    *(0x2c + r1) = r3; // stw @ 0x808B9BB4
    r0 = *(0x1780 + r4); // lwz @ 0x808B9BB8
    /* clrlwi. r0, r0, 0x1f */ // 0x808B9BBC
    if (==) goto 0x0x808b9bcc;
    r0 = r3 + 1; // 0x808B9BC4
    *(0x2c + r1) = r0; // stw @ 0x808B9BC8
    r0 = *(0x1780 + r4); // lwz @ 0x808B9BCC
    /* li r4, 0xd23 */ // 0x808B9BD0
    r3 = *(0x2bc + r31); // lwz @ 0x808B9BD4
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808B9BD8
    if (==) goto 0x0x808b9be4;
    /* li r4, 0xd26 */ // 0x808B9BE0
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    r0 = *(0xe4 + r1); // lwz @ 0x808B9BEC
    r31 = *(0xdc + r1); // lwz @ 0x808B9BF0
    return;
}