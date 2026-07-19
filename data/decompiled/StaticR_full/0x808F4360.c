/* Function at 0x808F4360, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808F4360(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808F4374
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808F437C
    r0 = *(0x6ff + r3); // lbz @ 0x808F4380
    if (!=) goto 0x0x808f4394;
    /* li r3, 0 */ // 0x808F438C
    /* b 0x808f4568 */ // 0x808F4390
    r0 = r4 + -0xb; // 0x808F4394
    /* li r29, 0x3c */ // 0x808F4398
    if (>) goto 0x0x808f455c;
    /* lis r4, 0 */ // 0x808F43A4
    /* slwi r0, r0, 2 */ // 0x808F43A8
    r4 = r4 + 0; // 0x808F43AC
    /* lwzx r4, r4, r0 */ // 0x808F43B0
    /* mtctr r4 */ // 0x808F43B4
    /* bctr  */ // 0x808F43B8
    /* lis r4, 0 */ // 0x808F43BC
    r4 = *(0 + r4); // lwz @ 0x808F43C0
    r0 = *(0x10 + r4); // lwz @ 0x808F43C4
    if (!=) goto 0x0x808f43d4;
    /* li r29, 0x14 */ // 0x808F43D0
    r0 = *(0x700 + r3); // lbz @ 0x808F43D4
    if (!=) goto 0x0x808f43ec;
    r0 = *(0x6c8 + r3); // lwz @ 0x808F43E0
}