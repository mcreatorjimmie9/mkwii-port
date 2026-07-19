/* Function at 0x808761FC, size=88 bytes */
/* Stack frame: 48 bytes */
/* Calls: 3 function(s) */

int FUN_808761FC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80876204
    *(0x1b8 + r3) = r4; // stw @ 0x80876208
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x80876218
    r6 = r6 + 0; // 0x80876220
    /* li r7, 0 */ // 0x80876224
    r4 = r6 + 0x190; // 0x80876228
    r5 = r6 + 0x19b; // 0x8087622C
    r6 = r6 + 0x1a3; // 0x80876230
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8087623C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x34 + r1); // lwz @ 0x80876244
    return;
}