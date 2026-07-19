/* Function at 0x80670D14, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80670D14(void)
{
    *(0x174 + r3) = r4; // stw @ 0x80670D14
    *(0x17c + r3) = r5; // stb @ 0x80670D18
    *(0x180 + r3) = r6; // stw @ 0x80670D1C
    /* b 0x80670d64 */ // 0x80670D20
}