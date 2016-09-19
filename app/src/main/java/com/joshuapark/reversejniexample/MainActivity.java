package com.joshuapark.reversejniexample;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static {
        // If you have native methods in this class, then you should load the library in this class
        // If you load the library in other class (eg. Util.java),
        // then the library may have not been loaded when the native method is being called.
        System.loadLibrary("reversejni");
    }

    private TextView tv_result;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tv_result = (TextView)findViewById(R.id.tv_result);
        nativeSetEnv();
    }

    // Call JNI (JAVA -> C) : Set environments to call back Java methods
    public native void nativeSetEnv();

    // Reverse JNI (C -> Java) : A method call from the native
    public void callFromNative() {
        Log.e("test", "JNI call from C to Java Working!");
        tv_result.setText("JNI call from C to Java Working!");

    }
}
