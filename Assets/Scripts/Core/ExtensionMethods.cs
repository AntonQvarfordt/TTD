using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Itatake.Generic
{
    public static class ExtensionMethods
    {
        public static bool IsValueWithinSpan (float value, float bottomNumber, float topNumber)
        {
            var returnValue = false;

            if (bottomNumber > topNumber)
            {
                returnValue = (value <= bottomNumber && value >= topNumber);
            }
            else
            {
                returnValue = (value >= bottomNumber && value <= topNumber);

            }
            return returnValue;
        }
    }
}
