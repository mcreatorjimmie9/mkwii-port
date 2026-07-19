/* Function at 0x808EDF14, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808EDF14(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808EDF2C
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x808EDF34
    r12 = *(0x70 + r12); // lwz @ 0x808EDF38
    /* mtctr r12 */ // 0x808EDF3C
    /* bctrl  */ // 0x808EDF40
    /* clrlwi r30, r3, 0x18 */ // 0x808EDF44
    /* li r29, 0 */ // 0x808EDF48
    /* li r31, 0 */ // 0x808EDF4C
    /* b 0x808edf84 */ // 0x808EDF50
    r3 = *(0x1a0 + r28); // lwz @ 0x808EDF54
    /* lwzx r3, r3, r31 */ // 0x808EDF58
    r12 = *(0 + r3); // lwz @ 0x808EDF5C
    r12 = *(0x40 + r12); // lwz @ 0x808EDF60
    /* mtctr r12 */ // 0x808EDF64
    /* bctrl  */ // 0x808EDF68
    if (==) goto 0x0x808edf7c;
    /* li r3, 1 */ // 0x808EDF74
    /* b 0x808edf90 */ // 0x808EDF78
    r31 = r31 + 4; // 0x808EDF7C
    r29 = r29 + 1; // 0x808EDF80
    if (<) goto 0x0x808edf54;
    /* li r3, 0 */ // 0x808EDF8C
    r0 = *(0x24 + r1); // lwz @ 0x808EDF90
    r31 = *(0x1c + r1); // lwz @ 0x808EDF94
    r30 = *(0x18 + r1); // lwz @ 0x808EDF98
    r29 = *(0x14 + r1); // lwz @ 0x808EDF9C
    r28 = *(0x10 + r1); // lwz @ 0x808EDFA0
    return;
}