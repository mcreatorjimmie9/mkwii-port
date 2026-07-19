/* Function at 0x80754DFC, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80754DFC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x80754E10
    *(0x14 + r1) = r29; // stw @ 0x80754E14
    /* li r29, 0 */ // 0x80754E18
    *(0x10 + r1) = r28; // stw @ 0x80754E1C
    r28 = r3;
    /* b 0x80754e60 */ // 0x80754E24
    r3 = *(0xe4 + r28); // lwz @ 0x80754E28
    /* clrlwi r4, r29, 0x18 */ // 0x80754E2C
    FUN_807746B0(); // bl 0x807746B0
    r4 = *(0xe0 + r28); // lwz @ 0x80754E34
    r31 = r3;
    /* lwzx r3, r4, r30 */ // 0x80754E3C
    r12 = *(0 + r3); // lwz @ 0x80754E40
    r12 = *(0xfc + r12); // lwz @ 0x80754E44
    /* mtctr r12 */ // 0x80754E48
    /* bctrl  */ // 0x80754E4C
    r3 = *(0x40 + r3); // lwz @ 0x80754E50
    r30 = r30 + 4; // 0x80754E54
    r29 = r29 + 1; // 0x80754E58
    *(0x21 + r3) = r31; // stb @ 0x80754E5C
    r0 = *(0xd0 + r28); // lbz @ 0x80754E60
    if (<) goto 0x0x80754e28;
    r0 = *(0x24 + r1); // lwz @ 0x80754E6C
    r31 = *(0x1c + r1); // lwz @ 0x80754E70
    r30 = *(0x18 + r1); // lwz @ 0x80754E74
    r29 = *(0x14 + r1); // lwz @ 0x80754E78
    r28 = *(0x10 + r1); // lwz @ 0x80754E7C
    return;
}