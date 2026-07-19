/* Function at 0x8069D32C, size=160 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069D32C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3;
    *(0x5c + r1) = r31; // stw @ 0x8069D340
    *(0x58 + r1) = r30; // stw @ 0x8069D344
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r30, 0 */ // 0x8069D34C
    r31 = *(0 + r30); // lwzu @ 0x8069D350
    /* lis r6, 0 */ // 0x8069D354
    *(8 + r1) = r31; // stw @ 0x8069D358
    r12 = *(4 + r30); // lwz @ 0x8069D35C
    r6 = r6 + 0; // 0x8069D360
    r11 = *(8 + r30); // lwz @ 0x8069D364
    r10 = *(0xc + r30); // lwz @ 0x8069D36C
    r4 = r6 + 0xb; // 0x8069D370
    r9 = *(0x10 + r30); // lwz @ 0x8069D374
    r5 = r6 + 0x11; // 0x8069D378
    r8 = *(0x14 + r30); // lwz @ 0x8069D37C
    r6 = r6 + 0x1c; // 0x8069D380
    r0 = *(0x18 + r30); // lwz @ 0x8069D384
    *(0xc + r1) = r12; // stw @ 0x8069D38C
    *(0x10 + r1) = r11; // stw @ 0x8069D390
    *(0x14 + r1) = r10; // stw @ 0x8069D394
    *(0x18 + r1) = r9; // stw @ 0x8069D398
    *(0x1c + r1) = r8; // stw @ 0x8069D39C
    *(0x20 + r1) = r0; // stw @ 0x8069D3A0
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8069D3AC
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x8069D3B4
    r31 = *(0x5c + r1); // lwz @ 0x8069D3B8
    r30 = *(0x58 + r1); // lwz @ 0x8069D3BC
    return;
}