
class LedControl
{
public:
    LedControl() = default;
    ~ LedControl() = default;
    
    /** @brief Switch off/on specified LEDs */
    static void set(const UI8 ledData);
    static void initialize();   

private:
    static const UI32 pinLedSck_ = 0; 
    static const UI32 pinLedRck_ = 1;
    static const UI32 pinLedDat_ = 2; 

    static void clearPin(const UI32 pin);
    static void setPin(const UI32 pin);
};
