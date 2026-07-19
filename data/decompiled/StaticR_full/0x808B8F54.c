/* Function at 0x808B8F54, size=116 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808B8F54(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    *(0xdc + r1) = r31; // stw @ 0x808B8F60
    r31 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808B8F70
    /* li r4, 0 */ // 0x808B8F74
    r3 = *(0 + r3); // lwz @ 0x808B8F78
    r3 = r3 + 0x34; // 0x808B8F7C
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    /* clrlwi r0, r3, 0x1c */ // 0x808B8F84
    if (==) goto 0x0x808b8f9c;
    /* li r0, 0x901 */ // 0x808B8F90
    *(0x2c + r1) = r0; // stw @ 0x808B8F94
    /* b 0x808b8fa4 */ // 0x808B8F98
    /* li r0, 0x902 */ // 0x808B8F9C
    *(0x2c + r1) = r0; // stw @ 0x808B8FA0
    r3 = r31 + 0x6c8; // 0x808B8FA4
    /* li r4, 0xbc4 */ // 0x808B8FAC
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x808B8FB4
    r31 = *(0xdc + r1); // lwz @ 0x808B8FB8
    return;
}